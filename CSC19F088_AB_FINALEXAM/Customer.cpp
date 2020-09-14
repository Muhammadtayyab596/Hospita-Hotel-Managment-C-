#include "Customer.h"
using namespace std;
Customer::Customer(){}
Customer::Customer(string n, int cnic ,int cphn, bool  cp,int cr )
{
        CustomerName = n;
        CustomerCNIC = cnic;
        CoustomerPhoneNum = cphn;
        CustomerPayment = cp ;
        CustomerRoomNum =  cr;
}


/*void Customer::displayData()
{
     cout << endl << "\t\t\t" << "COSTUMER NAME " << "\t\t\t" <<  CustomerName << endl;
     cout << endl << "\t\t\t" << "COSTUMER CNIC " << "\t\t\t" <<  CustomerCNIC << endl;
     cout << endl << "\t\t\t" << "COSTUMER PHONE NUMBER " << "\t\t\t" <<  CoustomerPhoneNum << endl;
      cout << endl << "\t\t\t" << "COSTUMER PAYMENT " << "\t\t\t" <<  CustomerPayment << endl;

    cout << endl << "\t\t\t" << "COSTUMER ROOM NUMBER " << "\t\t\t" <<   CustomerRoomNum << endl;

    cout << endl << "\t\t\t" << "HOTEL NAME " << "\t\t\t" <<  HotelName << endl;

    cout << endl << "\t\t\t" << "NUMBER OF ROOMS " << "\t\t\t" << NumofRoom << endl;
    cout << endl << "\t\t\t" << "ROOM TYPE " << "\t\t\t" << RoomType << endl;
}*/
