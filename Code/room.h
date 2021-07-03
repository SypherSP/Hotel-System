#ifndef __ROOM
#define __ROOM
#include <bits/stdc++.h>
// #include "customer.h"
 vector<int> rooms;   // having problem with this vector declaration
using namespace std;
namespace Project
{   
    
    class Room
    {
        private:
        int id;
        int roomNo;
        int status;
        string type;
        public:
        // Customer customer;
        void addRoom(int);
        void searchRoom(int);
        void displayRoom(Room);
        void deleteRoom(int);
        void cleanRoom(int);
    };
}
#endif