#include "menu.h"
#include <bits/stdc++.h>
using namespace std;
namespace Project
{
    void Menu::add_item()
    {
        string item;
        int price;
        cout << "enter the item you want to add: ";
        cin >> item;
        cout << "enter the price: ";
        cin >> price;
        menu_items.push_back({item, price});
        cout << "Item has been added in the menu successfully!" << endl;
    }
    void Menu::remove_item()
    {
        string item;
        cout << "Enter the item you want to remove: " << endl;
        cin >> item;
        bool found = false;
        for (auto i : menu_items)
        {
            if (i.first == item)
            {
                // menu_items.erase(i);  throwing error;
                cout << "The given item has been removed successfuly!" << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Item not found." << endl;
    }
    void Menu::change_price()
    {
        string item;
        int price;
        cout << "Enter the item: ";
        cin >> item;
        cout << "Enter price: ";
        cin >> price;
        bool found = false;
        int i;
        for (i = 0; i < menu_items.size(); i++)
        {
            if (menu_items[i].first == item)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            menu_items[i].second = price;
            cout << "Price changed successfully!" << endl;
        }
        else
            cout << "Item not found." << endl;
    }
    void Menu::display_menu()
    {
        cout<<"Here are the available items in the menu: "<<endl;
        cout<<"S.NO       Item       Price"<<endl;
        for(int i=0;i<menu_items.size();i++)
        {
            cout<<i+1<<".      "<<menu_items[i].first<<":       $"<<menu_items[i].second<<endl;
        }
    }
}