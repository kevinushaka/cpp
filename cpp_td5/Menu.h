

#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>
#include "Menu_Item.h"
class Menu{
    private:
        std::vector<MenuItem*> items;
    public:
        std::string title;
        Menu()=default;
        Menu(const std::string& title);
        void activate();
        void addItem(const MenuItem& in);
        ~Menu();

};

#endif