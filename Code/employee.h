#include "person.h"
#include <string>

namespace Project
{
    class Employee:Person
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