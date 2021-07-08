#ifndef __CUSTOMER
#define __CUSTOMER
using namespace std;
#include "person.h"
#include "room.h"

namespace Project
{
    class Customer : public Person
    {
    private:
        static int counter;
        int id;
        int booking_Id;
        int advance_payment;
        int bill;
            
    public:
        Customer();
        Room& room; 
        void assignRoom(Room&);
        Customer(string,string,string);
        void check_In();
        void check_out(int);
        void order_food();  
        void giveBookingID(int);
        int getBookingID();
        void addToBill(int);
        int getBill();  
    };
}
#endif  