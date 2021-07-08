#include "customer.h"
#include "person.h"
#include "room.h"
using namespace std;
namespace Project
{
    int Customer::counter=1;
    Customer::Customer()
        :Person("N/A","N/A","N/A")
    {
        //room=Room();
        booking_Id=0;
        bill=0;
        id=0;
    }

    Customer::Customer(string name,string email,string phone_no)
        :Person(name,email,phone_no)
    {
        //room=Room();
        booking_Id=0;
        bill=0;
        id=counter++;
    }

    void Customer::addToBill(int x)
    {
        bill+=x;
    }

    int Customer::getBill()
    {
        return bill;
    }
    
    void Customer::assignRoom(Room& x)
    {
        this->room=x;
    }
    
    void Customer::order_food()
    {
    }

    void Customer::giveBookingID(int id)
    {
        this->booking_Id=id;
    }

    int Customer::getBookingID()
    {
        return booking_Id;
    }
}