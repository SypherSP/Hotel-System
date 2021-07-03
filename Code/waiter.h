#ifndef __WAITER
#define __WAITER
#include "employee.h"
#include "person.h"
#include <string>

//have to include order list class and Table class

namespace Project
{
    class Waiter:public Employee
    {
        private:
            int table_no;//instead of table no it will be a Table class


        public:
            Waiter(string,string,string,int);
            void takeOrder(int);
            void cleanTable();
    };
}
#endif