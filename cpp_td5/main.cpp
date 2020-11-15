#include <iostream>
using namespace std;

#include "Menu.h"
#include "Simple_Menu_Item.h"
#include "Walking_Menu.h"
int main()
{
    Menu menu={"LE MENU"};
    SimpleMenuItem emacs={"emacs"};
    SimpleMenuItem htop={"htop"};
    WalkingMenu COMMUNICATIONS={"COMMUNICATIONS"};
    SimpleMenuItem pidgin={"pidgin"};
    SimpleMenuItem thunderbird={"thunderbird"};
    SimpleMenuItem rsync={"tysync my home"};
    SimpleMenuItem traceroute={"traceroute"};
    COMMUNICATIONS.addItem(pidgin);
    COMMUNICATIONS.addItem(thunderbird);
    COMMUNICATIONS.addItem(rsync);
    COMMUNICATIONS.addItem(traceroute);
    menu.addItem(emacs);
    menu.addItem(htop);
    menu.addItem(COMMUNICATIONS);
    menu.activate();
}