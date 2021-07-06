#ifndef __ROOM
#define __ROOM
#include "customer.h"

using namespace std;
namespace Project
{   
    
    class Room
    {
        private:
            int roomNo;
            bool status;
            static int counter;
            friend class Customer;
            const static char* room_type[]; 
            int t;//type
            Customer* cust;

        public:
            Room();//null room
            Room(int);
            Room(int, Customer&);
            int rent=1000;
            int getRoomNo();
            bool isOccupied();
            string getType();
            int getT();
            void assignCust(Customer&);
            void unoccupy();
    };
}
#endif