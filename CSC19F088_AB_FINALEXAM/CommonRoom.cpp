
#include "CommonRoom.h"
using namespace std;
CommonRoom::CommonRoom()
{
    //ctor
}
CommonRoom::CommonRoom(string n,int r ,bool rt,string   b, string p, bool re)
{
        HotelName = n;
        NumofRoom = r ;
        RoomType = rt;
        bed = b ;
        price = p;
        regrigrator = re ;
}

 void CommonRoom::PrintCroomData()
 {
     cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";
     cout << endl << "\t\t\t" << "               >>>   COMMON ROOM DATA   >>>                      " << "\t\t\t";
     cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";



    cout << endl << "\t\t\t" << "HOTEL NAME " << "\t\t\t" <<  HotelName << endl;
    cout << endl << "\t\t\t" << "NUMBER OF ROOM " << "\t\t\t" << NumofRoom << endl;
    cout << endl << "\t\t\t" << "ROOM TYPE ";
    if(RoomType)
    {
        cout <<  "\t\t\t" << "LUXORY ROOM" << endl;

    }
    else
    {
         cout <<  "\t\t\t" << "COOMON ROOM" << endl;
    }

    cout << endl << "\t\t\t" << "BED " << "\t\t\t\t" <<  bed << endl;

    cout << endl << "\t\t\t" << "RESGRIGRATOR AVAIBLITY ";

    if(regrigrator)
    {
        cout <<  "\t\t" << "YES!" << endl;

    }
    else
    {
         cout <<  "\t\t" << "NO!" << endl;
    }
    cout << endl << "\t\t\t" << "PRICE (PER DAY) " << "\t\t" <<  price << endl;
 }
