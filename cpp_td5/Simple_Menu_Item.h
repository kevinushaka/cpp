

#ifndef SIMPLE_MENU_ITEM_H
#define SIMPLE_MENU_ITEM_H

#include <string>
#include "Menu_Item.h"

class SimpleMenuItem : public MenuItem
{
    public:
        SimpleMenuItem(const std::string& title);
        SimpleMenuItem(const SimpleMenuItem& other);
        virtual void execute();
        SimpleMenuItem* clone()const override ;
        


};

#endif