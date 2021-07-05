#include <bits/stdc++.h>
#include "customer.h"
#include "person.h"
#include "room.h"
using namespace std;
namespace Project
{
    Customer::Customer()
        :Person("N/A","N/A","N/A")
    {
        
    }

    Customer::Customer(string name,string email,string phone_no)
        :Person(name,email,phone_no)
    {

    }

    // void Customer::check_In()
    // {
    //     cout << "Enter room number that you would like to have :" << endl;
    //     int room_no;
    //     cin >> room_no;
    //     int i;
    //     bool found = false;
    //     for (i = 0; i < rooms.size(); i++)
    //     {
    //         if (rooms[i].roomNo == room_no)
    //         {
    //             found = 1;
    //             break;
    //         }
    //     }
    //     if (found && rooms[i].status)
    //     {
    //         cout << "Room is already booked" << endl;
    //     }
    //     else if (found && rooms[i].status == 0)
    //     {
    //         cout << "Enter booking id: ";
    //         cin >> rooms[i].customer.booking_Id;
    //         cout << "Enter Customer Name (First Name): ";
    //         cin >> rooms[i].customer.name;
    //         cout << "Enter Phone: ";
    //         cin >> rooms[i].customer.phone_no;
    //         cout << "Enter Advance Payment: ";
    //         cin >> rooms[i].customer.advance_payment;

    //         rooms[i].status = 1;

    //         cout << "\n Customer Checked-in Successfully..";
    //     }
    //     else
    //         cout << "Room already booked!" << endl;
    // }
    // void Customer::check_out(int room_number)
    // {
    //     cout << "Enter the number of days you stayed: ";
    //     int days;
    //     cin >> days;
    //     int cost = days * rooms[room_number].rent;
    //     cout << "------ CheckOut Details-------" << endl;
    //     cout << "Customer Name : " << rooms[room_number].customer.name;
    //     cout << "Room Number : " << rooms[room_number].roomNo;
    //     cout << "Phone : " << rooms[room_number].customer.phone_no << endl;
    //     cout << "Total Amount Due : " << cost << endl;
    //     cout << "Advance Paid: " << rooms[room_number].customer.advance_payment << endl;
    //     cout << "*** Total Payable: " << cost - rooms[room_number].customer.advance_payment << "/ only";

    //     rooms[room_number].status = 0;
    // }
    void Customer::order_food()
    {
    }
}