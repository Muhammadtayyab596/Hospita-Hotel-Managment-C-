#ifndef LUXORYROOM_H
#define LUXORYROOM_H
using namespace std;
#include "Room.h"
class LuxoryRoom : public Room
{
    protected:
        string bed;
        string price;
        bool regrigrator;
        bool Ac_LED;
        string service;


    public:
        LuxoryRoom();
        LuxoryRoom(string ,int  ,bool ,string   , string , bool ,bool, string);

         void PrintLroomData();


         void AdditionalFeature();



};

#endif // LUXORYROOM_H
