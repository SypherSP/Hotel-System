#include "receptionist.h"
#include <string>
#include <iostream>
#include "employee.h"
#include "person.h"
#include "customer.h"
#include "room.h"
#include <vector>
#include <string>

namespace Project
{
    Receptionist::Receptionist(string name,string email, string phone_no)
            :Employee(name,email,phone_no,2)
            {

            }

    void Receptionist::takePayment()//customer class as parameter
    {
        cout<<"Payment taken from customer "<<endl;
    }

    Room& Receptionist::searchForRoom(int t)
    {
        for(auto r:rooms){
            if(r.getT()==t)return r;
        }
        return NULL;
    }

    void Receptionist::createReservation()
    {
        
    }

    void Receptionist::createEmployee(int t)
    {
        string email,name,phone;
        cout<<"Enter new employee details :\nName: ";cin>>name;
        cout<<"Email: ";cin>>email;
        cout<<"Phone Number: ";cin>>phone;
        empsH.push_back(Employee(name,email,phone,t));
    }

    void Receptionist::createRoom(int t)
    {
        rooms.push_back(Room(t));
    }

    void Receptionist::createRoom(int t,Customer& cust)
    {
        rooms.push_back(Room(t,cust));
    }

    void Receptionist::getRoomCleaned(Room& r)
    {
        cout<<"Room number "<<r.getRoomNo()<<" has been cleaned"<<endl; 
    }

    void Receptionist::run()
    {
        
    }
}
