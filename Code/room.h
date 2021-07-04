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
        int status;
        friend class Customer;
        
        string type;
        public:
        Customer customer;
        int rent=1000;
         Room();
        void addRoom(int);
        void searchRoom(int);
        void displayRoom(Room);
        void deleteRoom(int);
        void cleanRoom(int);
    };
     vector<Room>rooms;
}
#endif