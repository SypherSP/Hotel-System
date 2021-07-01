#include "employee.h"
#include "person.h"
#include "waiter.h"
#include <string>
#include <iostream>


namespace Project
{
    Waiter::Waiter(string name,string email, string phone_no,int t=1)
           :Employee(name,email,phone_no,t)
    {
        table_no=0;
    }

    void Waiter::takeOrder(int table_no)
    {
        this->table_no=table_no;
        cout<<"Order has been taken at table no "<<table_no<<endl;
    }

    void Waiter::cleanTable()
    {
        cout<<"table no "<<table_no<<" has been cleaned. "<<endl;
    }
}