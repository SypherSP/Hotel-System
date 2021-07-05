#ifndef __ROOM
#define __ROOM
#include <bits/stdc++.h>
#include "customer.h"
    // having problem with this vector declaration
using namespace std;
namespace Project
{   
    
    class Room
    {
        private:
            int id;
            int roomNo;
            bool status;
            static int counter;
            friend class Customer;
            const static char* room_type[]; 
            int t;//type
            Customer cust;

        public:
            Room(int);
            Room(int, Customer&);
            int rent=1000;
            int getRoomNo();
            bool isOccupied();
            string getType();
            int getT();
    };
     vector<Room>rooms;
}
#endif