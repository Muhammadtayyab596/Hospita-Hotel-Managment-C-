#ifndef PATIENT_H
#define PATIENT_H
using namespace std;
#include <iostream>
#include "Doctor.h"
class Patient : public Doctor
{
    protected:
        string LastVist;
        int PatientNum = 1;

    public:
        Patient();
        Patient(string n ,string i, int p ,int a,string f,string lv);

        void DisplayPatientData();




};

#endif // PATIENT_H
