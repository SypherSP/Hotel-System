
#include<string>
using namespace std;
namespace Project{
    class Person
    {
        private:
            string name;
            string email;
            string phone_no;

        public:
            Person(string, string, string);
            void change_no(string);
            void change_email(string);
            string get_name();
            string get_email();
            string get_phone_no();
    };
}