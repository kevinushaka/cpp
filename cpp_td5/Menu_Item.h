

#ifndef MENU_ITEM_H
#define MENU_ITEM_H
#include <string>

class MenuItem{
    protected:
        MenuItem(const std::string& newTitle);
    public:
        std::string title;
        virtual void execute()=0;
        virtual MenuItem* clone() const =0;
};

#endif