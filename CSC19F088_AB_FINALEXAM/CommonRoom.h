#ifndef COMMONROOM_H
#define COMMONROOM_H
#include "Room.h"
using namespace std;
class CommonRoom : public Room
{
     protected:
        string bed;
        string price;
        bool regrigrator;

    public:
        CommonRoom();
        CommonRoom(string ,int ,bool,string , string, bool);


        void PrintCroomData();



};

#endif // COMMONROOM_H

