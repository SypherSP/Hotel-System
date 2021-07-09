#ifndef __WAITER
#define __WAITER
#include "employee.h"
#include "person.h"
#include "restaurantmanager.h"
#include "table.h"
#include <string>

namespace Project
{   
    class Table;
    class Waiter:public Employee
    {
        private:
            Table table_assigned;
            friend class restaurant_manager;
        public:
            Waiter(string,string,string);
             int waiter_status; 
            void takeOrder(Table);
            void cleanTable(Table);
    };
    vector<Waiter>waiters;
}
#endif