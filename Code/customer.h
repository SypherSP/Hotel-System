#ifndef __CUSTOMER
#define __CUSTOMER
using namespace std;
#include "person.h"
#include "room.h"

namespace Project
{
    class Customer : protected Person
    {
    private:
        int booking_Id;
        int advance_payment;
        
    
    public:
    Customer();
        void assignRoom(Room*);
        Customer(string,string,string);
        void check_In();
        void assignRoom(Room*);
        void check_out(int);
        void order_food();  
        Room* room; 
        void giveBookingID(int);
    };
}
#endif  