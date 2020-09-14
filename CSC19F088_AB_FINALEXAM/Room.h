#ifndef ROOM_H
#define ROOM_H
using namespace std;
#include <iostream>
#include "Customer.h"
class Room : public Customer
{
     protected:
         string HotelName;
         int NumofRoom;
         bool RoomType;

    public:
        Room();
        Room(string ,int ,bool,string ,int ,int, bool ,int,int,int );

        void Printdata();

};

#endif // ROOM_H


