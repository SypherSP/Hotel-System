#include "room.h"
#include "customer.h"

namespace Project
{
    const char* Room::room_type[]= {"Single", "Double", "Quad", "Twin", "Queen"};
    const int Room::costPerDay[]={2199,3599,7699,3899,10999};
    int Room::counter=1;
    Room::Room(int t)
    {
        this->t=t;
        this->roomNo=counter++;
        status=false;
        //cust=new Customer();
    }

    // Room::Room(int t,Customer& c)
    // {
    //     this->t=t;
    //     this->roomNo=counter++;
    //     status=true;
    //     cust=&c;
    // }

    Room::Room()//null room
    {
        roomNo=0;
    }

    // void Room::assignCust(Customer& cust)
    // {
    //     this->cust=&cust;
    // }

    bool Room::isOccupied()
    {
        return status;
    }

    int32_t Room::getRoomNo()
    {
        return roomNo;
    }

    string  Room::getType()
    {
        return room_type[t];
    }

    void Room::unoccupy()
    {
        status=false;
        // cust=new Customer();
    }

    int Room::getT()
    {
        return t;
    }

    int Room::getCostPerDay()
    {
        return costPerDay[t];
    }
}
