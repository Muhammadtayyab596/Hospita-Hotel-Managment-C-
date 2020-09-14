#ifndef HOSPITAL_H
#define HOSPITAL_H
using namespace std;
#include "Doctor.h"
class Hospital : public Doctor
{
    protected:
        int NumDoctors;
        //string OwnerName;
        string Address;


    public:
        Hospital();
        Hospital(int ,string , string ,int);

        void DisplayHospitalData();




};

#endif // HOSPITAL_H

