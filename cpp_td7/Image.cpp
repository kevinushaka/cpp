#include "Image.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <filesystem>

std::string getFileName(const std::string& filename) {

     char sep = '/';
    size_t i = filename.rfind(sep, filename.length());
    return(filename.substr(i+1, filename.length() - i));

}

Image::Image(const std::string& file_path) {
    this->file_name=getFileName(file_path);
    std::ifstream infile;
    infile.open (file_path);
    std::string line;
    for( int i=0; i<3; getline( infile, line ),i++ ){}
    std::istringstream size(line);
    size >> this->nb_colons >> this->nb_lines;
    unsigned int r,g,b;
    while (std::getline(infile, line))
    {
        std::istringstream color3(line);
        
        if (color3 >> r >> g>> b) { 
            Pixel pixel={r,g,b};
            this->addPixel(pixel);
        }else{
            std::istringstream color1(line);
            color1>>r;
            Pixel pixel={r,0,0};
            std::getline(infile, line);
            color1>>pixel.G;
            std::getline(infile, line);
            color1>>pixel.B;
            this->addPixel(pixel);    
        }
        
    }
    infile.close();
}

void Image::addPixel(const Pixel& pixel){
    pixels.push_back(pixel.clone());
}

std::ostream& operator<<(std::ostream& os, const Image& image){
         os << "P3"<<std::endl;
         os << "#"<<std::endl;
         os << image.nb_colons<<" "<< image.nb_lines<<" 255"<<std::endl;
        for(Pixel* pixel: image.pixels){
            os << *pixel<<std::endl;
        }
        return os;
}


Pixel* grayscale(Pixel* pixel){
    unsigned int average= (pixel->R+pixel->G+pixel->B)/3;
    Pixel newpixel={average,average,average};
    return newpixel.clone();
}

Pixel* flip(Pixel* pixel){
    unsigned int average= (pixel->R+pixel->G+pixel->B)/3;
    Pixel newpixel={average,average,average};
    return newpixel.clone();
}

void Image::makeItGrey(){
    std::vector<Pixel*> newPixels(this->nb_colons*this->nb_lines);
    std::transform(pixels.begin(),pixels.end(),newPixels.begin(),grayscale);
    pixels.clear();
    pixels=newPixels;
}

void Image::returnIt(){
    std::vector<Pixel*> newPixels(this->nb_colons*this->nb_lines);
    std::transform(pixels.begin(),pixels.end(),newPixels.begin(),flip);
    pixels.clear();
    pixels=newPixels;
}

void Image::sortIt(){
    std::sort (pixels.begin(), pixels.end()); 
}


Image::~Image(){
    for(Pixel* pixel: this->pixels){
        delete pixel;
    }
}

