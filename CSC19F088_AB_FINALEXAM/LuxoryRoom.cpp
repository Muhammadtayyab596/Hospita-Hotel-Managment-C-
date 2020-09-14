
#include "LuxoryRoom.h"
using namespace std;
LuxoryRoom::LuxoryRoom()
{
    //ctor
}
LuxoryRoom::LuxoryRoom(string n,int r ,bool rt,string   b, string p, bool re,bool ac_led, string ser)
{
        HotelName = n;
        NumofRoom = r ;
        RoomType = rt;
        bed = b ;
        price = p;
        regrigrator = re ;
        Ac_LED = ac_led;
        service = ser;
}





 void LuxoryRoom::PrintLroomData()
 {
     cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";
     cout << endl << "\t\t\t" << "               >>>   LUXOURY ROOM DATA   >>>                      " << "\t\t\t";
     cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t"<< endl;



    cout << endl << "\t\t\t" << "HOTEL NAME " << "\t\t\t" <<  HotelName << endl;
    cout << endl << "\t\t\t" << "ROOM NUMBER " << "\t\t\t" << NumofRoom << endl;
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
    cout << endl << "\t\t\t" << "ADDITIONAL FEATURE " << "\t\t\t";
    cout << endl << "\t\t\t" << "================== " << "\t\t\t"<<endl;

    cout << endl << "\t\t\t" << "SERVICES " << "\t\t\t" << service  <<endl;
    cout << endl << "\t\t\t" << "AVAILABLE AIRCONDITION & LED  ";// << "\t\t\t" << service  <<endl;
    if(Ac_LED)
    {
        cout <<  "\t " << "YES!" << endl;

    }
    else
    {
         cout <<  "\t " << "NO!" << endl;
    }


    cout << endl << "\t\t\t" << "PRICE (PER DAY) " << "\t\t" <<  price << endl;
 }
