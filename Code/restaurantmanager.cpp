#include "employee.h"
#include "person.h"
#include "restaurantmanager.h"
#include "table.h" 
#include <bits/stdc++.h>
namespace Project
{
    Restaurant_manager::Restaurant_manager(string name, string email, string phone_no, int t = 2)
        : Employee(name, email, phone_no, t)
    {
    }
    void Restaurant_manager::createReservationForFood(Customer custom)
    {
        bool found = false;
        int i = 0;
        for (i = 0; i < tables.size(); i++)
        {
            if (tables[i].table_status == 0)
            {
                found = true;
                break;
            }
        }
        if (found)
        {

            int i = 0;
            bool waiter_found = false;
            for (i = 0; i < waiters.size(); i++)
            {
                if (waiters[i].waiter_status == 0)
                {
                    waiter_found = true;
                    break;
                }
            }
            if (waiter_found)
            {
                cout << "you have assigned table no " << tables[i].table_no << endl;
                cout << "thank you!" << endl;
                tables[i].table_status = 1;
                tables[i].cust = custom;
            }
            else
                cout << "No waiter is currently free. Please wait for some time." << endl;
        }
        else
            cout << "sorry! all tables are booked." << endl;
    }
    void Restaurant_manager::takePayment(Customer custom)
    {
        cout<<"payment has been taken from ";
        custom.get_name();         
    }
}