#include "employee.h"
#include "person.h"
#include "waiter.h"
#include "table.h"
#include <string>
#include <iostream>

namespace Project
{
    Waiter::Waiter(string name,string email, string phone_no)
           :Employee(name,email,phone_no,1)
    {
       
    }

    void Waiter::takeOrder(Table table)
    {
       cout<<"Order has been taken at table no "<<table.getTno()<<endl;
    }

    void Waiter::cleanTable(Table table)
    {
       cout<<"table no "<<table.getTno()<<" has been cleaned. "<<endl;
    }
}