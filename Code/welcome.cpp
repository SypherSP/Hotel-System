#include "welcome.h"
#include "receptionist.h"
#include "restaurantmanager.h"
#include "customer.h"
#include <vector>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using namespace Project;

namespace Project
{
    Welcome::Welcome(){}
    void Welcome::run()
    {
        Room nullRoom=Room();
        Receptionist rec=Receptionist("MASS","hotel.system@hrs.com","1234567890");
        cout<<"---------------------Welcome-------------------";
        cout<<"Please enter your details: ";
        string name,email,phone;
        cout<<"Name: ";cin>>name;
        cout<<"Email id: ";cin>>email;
        cout<<"Phone Numebr: ";cin>>phone;
        customers.push_back(Customer(name,email,phone));
        int choice;
        cout<<"Where do you want to go: 1.Hotel 2.Resturant\n";
        cout<<"Enter your choice: ";cin>>choice;
        if(choice==1)
        {
            rec.run(customers[0]);
        }
        else if(choice==2)
        {
            cout<<"Sorry the resturant is unoperational at the moment"<<endl;
        }
        else cout<<"Incorrent choice, terminating "<<endl;
    }
}