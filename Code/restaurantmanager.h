#ifndef __RESTAURANTMANAGER
#define __RESTAURANTMANAGER
#include "employee.h"
#include "person.h"
#include "customer.h"
#include "waiter.h"
#include "table.h"
#include <vector>
#include<bits/stdc++.h>
using namespace std;

namespace Project
{
    class Restaurant_manager:public Employee
    {
        private:
            vector <Waiter> waiters;
            vector <Table> tables;

        public:
            Restaurant_manager(string,string,string,int);
            void createReservationForFood(Customer);
            void takePayment(Customer);
            void addTable(int);
            void run(Customer);
            int searchForTable();
            void addWaiter();
    };
}
#endif