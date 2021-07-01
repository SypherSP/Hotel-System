
#include<string>
using namespace std;

    class Person
    {
        protected:
            string name;
            string email;
            string phone_no;

        public:
            Person(string, string, string);
            void change_no(string);
            void change_email(string);
    };
