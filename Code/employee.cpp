#include "employee.h"
#include "person.h"
#include <string>

namespace Project
{
    int Employee::counter=1;
    const char* Employee::type[]={"Manager","Waiter","Receptionist","Chef","Room Keeper"};

    Employee::Employee(string name,string email, string phone_no,int t)
            :Person(name,email,phone_no)
    {
        id=counter++;
        this->t=t;
    }

    string Employee::get_type()
    {
        return type[t];
    }

    string Employee::get_id()
    {
        return std::to_string(id);
    }
}