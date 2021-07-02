#ifndef __employee
#define __employee
#include "person.h"
#include <string>

namespace Project
{
    class Employee:public Person
    {
        private:
            int id;
            int t;
            static int counter;
            const static char* type[];

        public:
            
            Employee(string,string,string,int);
            string get_id();
            string get_type();
    };
}
#endif