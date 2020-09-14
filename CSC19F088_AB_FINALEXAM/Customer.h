#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;
#include <iostream>
class Customer
{
    protected:
        string CustomerName;
        int CustomerCNIC;
        int CoustomerPhoneNum;
        bool CustomerPayment;
        int CustomerRoomNum;
        int ConsNUM;
        int ReqRoom;

    public:
        Customer();
        Customer(string ,int ,int, bool ,int);

        void displayData();




};

#endif // CUSTOMER_H
