#include "employee.h"
#include "person.h"
#include "restaurantmanager.h"
#include "table.h" 
#include "customer.h"
#include "waiter.h"
#include <vector>
#include <bits/stdc++.h>
namespace Project
{
    Restaurant_manager::Restaurant_manager(string name, string email, string phone_no)
        : Employee(name, email, phone_no,0)
    {
    }

    int Restaurant_manager::searchForTable()
    {
        for(Table t:tables)
        if(!t.check_table())return t.getTno();

        return 0;
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

    void Restaurant_manager::addTable(int seats)
    {
        tables.push_back(Table(seats));
    }

    void Restaurant_manager::addWaiter()
    {
        string name,email,phone;
        cout<<"Enter details of new waiter\nName: ";cin>>name;
        cout<<"Email: ";cin>>email;
        cout<<"Phone No: ";cin>>phone;
        waiters.push_back(Waiter(name,email,phone));
    }

    void Restaurant_manager::run(Customer* custom)
    {
        //implementation code for the restaurant goes here
    }
}