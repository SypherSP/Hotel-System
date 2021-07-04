#ifndef __MENU
#define __MENU
#include <bits/stdc++.h>
using namespace std;
namespace Project
{
    class Menu
    {
        void add_item();
        void remove_item();
        void change_price();

    public:
        vector<pair<string,int>> menu_items;
        void display_menu();
    };
}
#endif