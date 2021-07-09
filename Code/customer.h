#ifndef __CUSTOMER
#define __CUSTOMER
using namespace std;
#include "person.h"
#include "room.h"
#include "table.h"
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
        Table& table;
        Room& room; 
        void assignTable(Table&);
        void assignRoom(Room&);
        Customer(string,string,string);
        void order_food();  
        void giveBookingID(int);
        int getBookingID();
        void addToBill(int);
        int getBill();  
    };
}
#endif  