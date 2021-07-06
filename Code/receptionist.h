#ifndef __RECEPTIONIST
#define __RECEPTIONIST
#include "employee.h"
#include "person.h"
#include "customer.h"
#include "room.h"
#include <vector>
#include <string>

//include room, customer classes

namespace Project
{
    class Receptionist:public Employee
    {
        private:
            static vector <Room> rooms;
            static vector <Employee> empsH;
            static int maxRooms;
            static int idCounter;
            

        protected:
            void addRoom(int t);

        public:
            Receptionist(string,string,string);
            int createReservation(Customer&);
            void takePayment();
            void createRoom();
            Room* searchForRoom(int t);
            void getRoomCleaned(Room&);
            void createRoom(int);
            void createRoom(int,Customer&);
            void createEmployee(int);
            void run(Customer&);
    };
}
#endif