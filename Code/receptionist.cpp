
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
    int Receptionist::maxRooms = 40;
    int Receptionist::idCounter = 1;
    int Receptionist::cleaningCost = 450;
    Receptionist::Receptionist(string name, string email, string phone_no)
        : Employee(name, email, phone_no, 2)
    {
        defaultRoom = new Room();
    }

    Room *Receptionist::searchForRoom(int t)
    {
        for (int i = 0; i < rooms.size(); i++)
        {
            if ((rooms[i]->getT() == t) && !rooms[i]->isOccupied())
                return rooms[i];
        }
        return defaultRoom;
    }

    int Receptionist::createReservation(Customer *cust)
    {
        if (rooms.size() == maxRooms)
        {
            cout << "Sorry all rooms are booked" << endl;
            return 0;
        }
        cout << "Enter the type of room you want:\n1.Single\n2.Double\n3.Quad\n4.Twin\n5.Queen\nEnter the number:";
        int t;
        cin >> t;
        Room *x = searchForRoom(t - 1);
        cout << "Enter the number of days you want to stay: ";
        int days;
        cin >> days;
        if (x->getRoomNo())
        {
            //x->assignCust(cust);
            cust->assignRoom(x);
        }
        else
        {
            createRoom(t - 1);
            cust->assignRoom(searchForRoom(t - 1));
            //createRoom(t,cust);
        }
        cust->giveBookingID(idCounter++);
        cust->addToBill(cust->room->getCostPerDay() * days);
        cout << "Your Booking ID is " << cust->getBookingID() << endl;
        return 1;
    }

    void Receptionist::createEmployee(int t)
    {
        string email, name, phone;
        cout << "Enter new employee details :\nName: ";
        cin >> name;
        cout << "Email: ";
        cin >> email;
        cout << "Phone Number: ";
        cin >> phone;
        empsH.push_back(new Employee(name, email, phone, t));
    }

    void Receptionist::createRoom(int t)
    {
        rooms.push_back(new Room(t));
    }

    // void Receptionist::createRoom(int t,Customer& cust)
    // {
    //     rooms.push_back(Room(t,cust));
    // }

    void Receptionist::getRoomCleaned(Room *r)
    {
        cout << "Room number " << r->getRoomNo() << " has been cleaned" << endl;
    }

    void Receptionist::printBill(Customer *cust) //suposed to call bill class
    {
        cout << "\nYour bill amounting to " << cust->getBill() << "Rs\nDetails have been emailed to " << cust->get_email() << endl;
    }

    void Receptionist::takePayment(Customer *cust) //customer class as parameter
    {
        printBill(cust);
        cout << "You can pay through the link present in the email" << endl;
    }

    void Receptionist::run(Customer *cust)
    {
        int choice;
        do
        {
            cout << "-----------------------------------------------\n";
            cout << "You are at the receptionists desk of " << name << endl;
            if (!cust->getBookingID())
            {
                cout << "you do not have any bookings\n";
                cout << "Receptionist Menu\n1.Create reservation\n2.Exit\nEnter you choice: ";
                cin >> choice;
                if (choice == 2)
                    break;
                if (choice == 1)
                {
                    createReservation(cust);
                }
                else
                    cout << "Incorrect option, please try again\n";
            }
            else
            {
                cout << "You already have a reservation with ID " << cust->getBookingID() << endl;
                cout << "What do you want to do?\n1.Get your room cleaned\n2.Check Out\n3.Exit\nEnter you choice: ";
                cin >> choice;
                if (choice == 3)
                    break;
                if (choice == 1)
                {
                    getRoomCleaned(cust->room);
                    cust->addToBill(cleaningCost);
                    cout << "Cleaning cost " << cleaningCost << " has been added to you bill\n";
                    cout << "Your total amount is " << cust->getBill() << endl;
                }
                else if (choice == 2)
                {
                    printBill(cust);
                    cust->room->unoccupy();
                    cust->room = new Room();
                    takePayment(cust);
                }
                else
                {
                    cout << "incorect choice, exiting" << endl;
                    break;
                }
            }
        } while (1);
    }
}
