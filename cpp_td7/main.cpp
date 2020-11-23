
#include "Image.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    Image simpsons("pict/Simpsons.ppm");
    simpsons.makeItGrey();
    std::ofstream simpsons_Grey ("Simpsons_Grey.ppm");
    simpsons_Grey<<simpsons;
    simpsons_Grey.close();

    simpsons.returnIt();
    std::ofstream simpsons_Grey_returned("Simpsons_Grey_returned.ppm");
    simpsons_Grey_returned<<simpsons;
    simpsons_Grey_returned.close();

    Image simpsonsTer("pict/Simpsons.ppm");
    simpsonsTer.sortIt();
    std::ofstream simpsons_sorted("Simpsons_sorted.ppm");
    simpsons_sorted << simpsonsTer;
    simpsons_sorted.close();
    return 0;
}