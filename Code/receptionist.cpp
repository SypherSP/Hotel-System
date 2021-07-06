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
    int Receptionist::maxRooms=40;
    int Receptionist::idCounter=1;
    Receptionist::Receptionist(string name,string email, string phone_no)
            :Employee(name,email,phone_no,2)
            {

            }

    void Receptionist::takePayment()//customer class as parameter
    {
        cout<<"Payment taken from customer "<<endl;
    }

    Room* Receptionist::searchForRoom(int t)
    {
        for(auto r:rooms){
            if((r.getT()==t)&&!r.isOccupied())return &r;
        }
        Room x=Room();
        return &x;
    }

    int Receptionist::createReservation(Customer& cust)
    {
        if(rooms.size()==maxRooms){
            cout<<"Sorry all rooms are booked"<<endl;return 0;
        }
        cout<<"Enter the type of room you want:\n1.Single\n2.Double\n3.Quad\n4.Twin\n5.Queen\nEnter the number:";
        int t;cin>>t;
        Room* x=searchForRoom(t-1);
        if(x->getRoomNo()){
            x->assignCust(cust);
            cust.assignRoom(x);
        }
        else{
            createRoom(t,cust);
        }
        return 1;
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

    void Receptionist::run(Customer& cust)//customer acting on as parameter
    {
        //get customer number then proceed with it or if new customer 



        cust.room->unoccupy();
    }
}
