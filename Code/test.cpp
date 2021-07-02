#include<iostream>
#include <string>
#include "person.h"
#include "employee.h"
#include "waiter.h"
#include "receptionist.h"

using namespace std;
using Project::Employee;
using Project::Person;

int main(){


    Employee e=Employee("Shashwat Pandey","sypher.sp@gmail.com","9051799110",0);
    cout<<"ID of employee "<<e.get_name()<<": "<<e.get_id()<<endl;
    cout<<"Employee type is "<<e.get_type()<<endl;
    return 0;
}