#ifndef __ROOM
#define __ROOM

#include <string>

using namespace std;
namespace Project
{   
    
    class Room
    {
        private:
            int roomNo;
            bool status;
            static int counter;
            const static char* room_type[]; 
            const static int costPerDay[];
            int t;//type
            //Customer* cust;

        public:           
            Room();//null room
            Room(int);
            //Room(int, Customer&);
            int rent=1000;
            int getRoomNo();
            bool isOccupied();
            string getType();
            int getT();
            //void assignCust(Customer&);
            void unoccupy();
            int getCostPerDay();
    };
}
#endif