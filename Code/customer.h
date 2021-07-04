#ifndef __CUSTOMER
#define __CUSTOMER
#include<bits/stdc++.h>
using namespace std;
#include "person.h"
namespace Project
{
    class Customer : protected Person
    {
    private:
        int booking_Id;
        int advance_payment;
        public:
        void check_In();
        void check_out(int);
        void order_food();
    };
}

#endif