#include "employee.h"
#include "person.h"
#include <string>

//have to include order list class and Table class

namespace Project
{
    class Waiter:Employee
    {
        private:
            int table_no;//instead of table no it will be a Table class


        public:
            Waiter(string,string,string,int);
            void takeOrder(int);
            void cleanTable();
    };
}