#ifndef __WELCOME
#define __WELCOME

#include "receptionist.h"
//#include "restaurantmanager.h"
#include "customer.h"
#include <vector>
#include <iostream>
#include <string>

namespace Project
{
    class Welcome
    {
        private:
            vector <Customer> customers;

        public:
            Welcome();
            void run();
    };
}

#endif