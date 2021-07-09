#ifndef __WAITER
#define __WAITER
#include "employee.h"
#include "person.h"
#include "restaurantmanager.h"
#include <string>

namespace Project
{   
    class Table;
    class Waiter:public Employee
    {
        private:
            Table table_assigned;//instead of table no it will be a Table class
            friend class restaurant_manager;
        public:
            Waiter(string,string,string);
             int waiter_status; 
            void takeOrder(int);
            void cleanTable(int);
    };
    vector<Waiter>waiters;
}
#endif