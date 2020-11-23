

#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
class Pixel{
    public:
        unsigned int R,G,B;
        Pixel(unsigned int r,unsigned int g,unsigned int b);
        Pixel(const Pixel& pixel);
        Pixel* clone()const;
        ~Pixel()=default;
         friend std::ostream& operator<<(std::ostream& os, const Pixel& dt);
};

#endif