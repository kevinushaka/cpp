#include "Simple_Menu_Item.h"
#include <iostream>

SimpleMenuItem::SimpleMenuItem(const std::string& title):MenuItem(title){}

SimpleMenuItem::SimpleMenuItem(const SimpleMenuItem& other):MenuItem(other.title){}

SimpleMenuItem* SimpleMenuItem::clone()const{return new SimpleMenuItem(*this);}

void SimpleMenuItem::execute(){
        std::cout<<"**********  Execution de "<<this->title<<std::endl;
}

