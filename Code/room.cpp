#include <bits/stdc++.h>
#include "room.h"
namespace Project
{
    
   
    void Room::addRoom(int room_number)
    {
        Room room;
        room.roomNo = room_number;
        int n;
        string room_type[] = {"Single", "Double", "Triple", "Queen", "Twin"};
        for (int i = 0; i < 5; i++)
        {
            cout << "enter " << i + 1 << " for " << type[i] << "- type room";
        }
        cin >> n;
        if (n > 0 && n <= 5)
            room.type = room_type[n - 1];
        else
            cout << "invalid number." << endl;
        room.status = 0;
        rooms.push_back(room);
        cout << "room added successfully!" << endl;
    }
    void Room::searchRoom(int room_number)
    {
        int i = 0;
        bool found = false;
        for (i = 0; i < rooms.size(); i++)
        {
            if (rooms[i].roomNo == room_number)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            if (rooms[i].status)
                cout << "room is reserved." << endl;
            else
            {
                cout << "room is available. Here are the room details." << endl;
                displayRoom(rooms[i]);
            }
        }
        else
            cout << "sorry! room not found." << endl;
    }
    void Room::displayRoom(Room room_s)
    {
        cout<<"\nRoom Number: "<<room_s.roomNo;
        cout<<"Type:"<<room_s.type;
    }
    void Room::deleteRoom(int room_number)
    {
        if(room_number>rooms.size() && room_number<0) cout<<"please enter valid number"<<endl;
        else 
        {
            rooms.erase(room_number-1);
            cout<<"room with room number"<<room_number<<" deleted succefully."<<endl;
        }
    }
    void Room::cleanRoom(int room_number)
    {
         cout<<"room with room number"<<room_number<<" cleaned succefully."<<endl;
    }
}
