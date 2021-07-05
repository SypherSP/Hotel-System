#include <bits/stdc++.h>
#include "room.h"
 #include "customer.h"

namespace Project
{
    const char* Room::room_type[]= {"Single", "Double", "Triple", "Queen", "Twin"};
    int Room::counter=1;
    Room::Room(int t)
    {
        this->t=t;
        this->roomNo=counter++;
        status=false;
        cust=Customer();
    }

    Room::Room(int t,Customer& cust)
    {
        this->t=t;
        this->roomNo=counter++;
        status=true;
        this->cust=cust;
    }

    void Room::isOccupied()
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

    int Room::getT()
    {
        return t;
    }
}
