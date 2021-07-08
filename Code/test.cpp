#include<iostream>
#include <string>
#include "person.h"
#include "employee.h"
#include "waiter.h"
#include "receptionist.h"
#include "welcome.h"

using namespace std;
using namespace Project;

int main()
{
    Welcome* w=new Welcome();
    w->run();
}