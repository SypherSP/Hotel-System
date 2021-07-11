#include<iostream>
#include <string>
#include "person.h"
#include "employee.h"
#include "receptionist.h"
#include "waiter.h"
#include "restaurantmanager.h"
#include "welcome.h"

using namespace std;
using namespace Project;

int main()
{
    Welcome* w=new Welcome();
    w->run();
}