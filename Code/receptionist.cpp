#include "employee.h"
#include "person.h"
#include "receptionist.h"
#include <string>
#include <iostream>

namespace Project
{
    Receptionist::Receptionist(string name,string email, string phone_no,int t=2)
            :Employee(name,email,phone_no,t)
            {

            }

    void Receptionist::takePayment()//customer class as parameter
    {
        cout<<"Payment taken from customer "<<endl;
    }

    void Receptionist::createReservation()
    {

    }

    void Receptionist::getRoomCleaned()
    {
        
    }
}
