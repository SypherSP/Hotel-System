#ifndef __RECEPTIONIST
#define __RECEPTIONIST
#include "employee.h"
#include "person.h"
#include "customer.h"
#include "room.h"
#include <vector>
#include <string>

namespace Project
{
    class Receptionist:public Employee
    {
        private:
            vector <Room*> rooms;
            vector <Employee*> empsH;
            static int maxRooms;
            static int idCounter;
            static int cleaningCost;
            Room* defaultRoom;

        protected:
            void addRoom(int t);

        public:
            Receptionist(string,string,string);
            int createReservation(Customer*);
            void takePayment(Customer*);
            void createRoom();
            Room* searchForRoom(int t);
            void getRoomCleaned(Room*);
            void createRoom(int);
            void createRoom(int,Customer&);
            void createEmployee(int);
            void run(Customer*);
            void printBill(Customer*);   
    };
}
#endif