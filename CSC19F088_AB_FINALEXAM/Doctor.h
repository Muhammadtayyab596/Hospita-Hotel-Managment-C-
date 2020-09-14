#ifndef DOCTOR_H
#define DOCTOR_H
using namespace std;
#include<iostream>
class Doctor
{
    protected:
        string Name;
        string ID;
        string field;
        int phoneNum;
        string Timing;
        string Fees;
        int Age;
        int Room;


    public:
        Doctor();
        Doctor(string,string,string,int,string,string,int  ,int);

        void DislayDoctorData();



};

#endif // DOCTOR_H
