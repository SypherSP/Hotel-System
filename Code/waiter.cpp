#include "employee.h"
#include "person.h"
#include "waiter.h"
#include <string>
#include <iostream>


namespace Project
{
    Waiter::Waiter(string name,string email, string phone_no)
           :Employee(name,email,phone_no,1)
    {

    }

    void Waiter::takeOrder(int table_no)
    {
       cout<<"Order has been taken at table no "<<table_no<<endl;
    }

    void Waiter::cleanTable(int table_no)
    {
       cout<<"table no "<<table_no<<" has been cleaned. "<<endl;
    }
}