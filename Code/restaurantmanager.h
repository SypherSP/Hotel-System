#ifndef __RESTAURANTMANAGER
#define __RESTAURANTMANAGER
#include "employee.h"
#include "person.h"
#include "customer.h"
#include<bits/stdc++.h>
using namespace std;

namespace Project
{
    class Restaurant_manager:public Employee
    {
        public:
            Restaurant_manager(string,string,string,int);
            void createReservationForFood(Customer);
            void takePayment(Customer);
    };
}
#endif