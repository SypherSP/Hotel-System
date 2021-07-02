#ifndef __receptionist
#define __receptionist
#include "employee.h"
#include "person.h"
#include <string>

//include room, customer classes

namespace Project
{
    class Receptionist:public Employee
    {
        public:
            Receptionist(string,string,string,int);
            void createReservation();
            void takePayment();
            void getRoomCleaned();
    };
}
#endif