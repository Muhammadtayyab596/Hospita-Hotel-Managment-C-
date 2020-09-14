#include "Room.h"

using namespace std;
Room::Room()
{
    //ctor
}

Room::Room(string n,int r ,bool rt  ,string ni, int cnic ,int cphn, bool  cp,int cr, int num,int req)
{
        HotelName = n;
        NumofRoom = r ;
        RoomType = rt;
        CustomerName = ni;
        CustomerCNIC = cnic;
        CoustomerPhoneNum = cphn;
        CustomerPayment = cp ;
        CustomerRoomNum =  cr;
        ConsNUM = num;
        ReqRoom = req;

}





void Room::Printdata()
{
    cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";
    cout << endl << "\t\t\t" << "               >>>   CUSTOMER DATA " << ConsNUM <<"  >>>                      " << "\t\t\t";
    cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t"<< endl;
     cout << endl << "\t\t\t" << "HOTEL NAME " << "\t\t\t" <<  HotelName << endl;
    cout << endl << "\t\t\t" << "COSTUMER NAME " << "\t\t\t" <<  CustomerName << endl;
    cout << endl << "\t\t\t" << "COSTUMER CNIC " << "\t\t\t" <<  CustomerCNIC << endl;
    cout << endl << "\t\t\t" << "COSTUMER PHONE NUMBER " << "\t\t" <<  CoustomerPhoneNum << endl;
    cout << endl << "\t\t\t" << "COSTUMER PAYMENT ";
    if(CustomerPayment)
    {
        cout << "\t\t" <<  "YES" << endl;
    }
    else
    {
        cout << "\t\t" <<  "NO" << endl;
    }
    cout << endl << "\t\t\t" << "COSTUMER ROOM NUMBER " << "\t\t" <<   CustomerRoomNum << endl;

   cout << endl << "\t\t\t" << "COSTUMER REQUIRED ROOM  " << "\t" << ReqRoom << endl;
    cout << endl << "\t\t\t" << "ROOM TYPE ";
    if(RoomType)
    {
        cout <<  "\t\t\t" << "LUXORY ROOM" << endl;

    }
    else
    {
         cout <<  "\t\t\t" << "COMOON ROOM" << endl;
    }


}
