#include "Pixel.h"

Pixel::Pixel(unsigned int r,unsigned int g,unsigned int b):R(r),G(g),B(b){
}
Pixel::Pixel(const Pixel& pixel){
    this->R=pixel.R;
    this->G=pixel.G;
    this->B=pixel.B;
}
Pixel* Pixel::clone()const{
    return new Pixel(*this);
}

std::ostream& operator<<(std::ostream& os, const Pixel& pix){
    os<<pix.R<<" "<<pix.G<<" "<<pix.B;
    return os;
}

