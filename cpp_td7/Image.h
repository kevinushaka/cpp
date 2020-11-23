

#ifndef IMAGE_H
#define IMAGE_H
#include <vector>
#include "Pixel.h"
#include <string>
class Image{
    public :
        std::string file_name;
        std::vector<Pixel*> pixels;
        unsigned int  nb_colons,nb_lines;
        Image(const std::string& file_path);
        void addPixel(const Pixel& pixel);
        void makeItGrey();
        void returnIt();
        void sortIt();
        ~Image();
        friend std::ostream& operator<<(std::ostream& os, const Image& image);
};

#endif