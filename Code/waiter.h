#ifndef __WAITER
#define __WAITER
#include "employee.h"
#include "person.h"
#include "restaurantmanager.h"
#include <string>
#include "table.h"
//have to include order list class and Table class

namespace Project
{
    class Waiter:public Employee
    {
        private:
            Table table_assigned;//instead of table no it will be a Table class
            friend class restaurant_manager;
        public:
            Waiter(string,string,string);
             int waiter_status; 
            void takeOrder();
            void cleanTable();
    };
    vector<Waiter>waiters;
}
#endif