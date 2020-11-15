
#ifndef WALKING_MENU
#define WALKING_MENU

#include <string>
#include "Menu_Item.h"
#include "Menu.h"

class WalkingMenu : public MenuItem, public Menu
{
    public:
        WalkingMenu(std::string title);
        WalkingMenu(const WalkingMenu& other);
        void execute() override;
        WalkingMenu* clone()const override ;
};

#endif