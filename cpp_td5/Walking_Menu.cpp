#include "Walking_Menu.h"


WalkingMenu::WalkingMenu(std::string title):MenuItem(title){}

WalkingMenu::WalkingMenu(const WalkingMenu& other):MenuItem(other.MenuItem::title),Menu(other.MenuItem::title){}

WalkingMenu*  WalkingMenu::clone()const{return new WalkingMenu(*this);}

void  WalkingMenu::execute(){
    this->activate();
}
