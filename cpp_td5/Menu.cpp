#include "Menu.h"
#include <iostream>

Menu::Menu(const std::string& title):title(title){}

void Menu::activate(){
    
    
    int choice=-1;
    int end=this->items.size();
    while(choice!=end){
        std::cout<<this->title<<std::endl;
        for (unsigned i=0; i<this->items.size(); i++){
            std::cout<<"  "<<i<<"- "<<this->items[i]->title<<std::endl;
        }        
        std::cout<<"  "<<end<<"- "<<"quit"<<std::endl;
        std::cout<<"Votre choix ?"<<std::endl;
        std::cin>>choice;
        if(choice<end && choice >=0){
            this->items.at(choice)->execute();
        }else if( end==choice){
            return;
        }else{
            std::cout<<"Le menu séléctionné n'extiste pas. Réessayez."<<std::endl;
        }
    }
}

void Menu::addItem(const MenuItem& in) {
    this->items.push_back(in.clone());
}

Menu::~Menu(){
      for (unsigned i=0; i<this->items.size(); i++){
             delete this->items[i];
      }
   
}