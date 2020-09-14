#ifndef BONEDOCTOR_H
#define BONEDOCTOR_H
using namespace std;
#include "Doctor.h"
class BoneDoctor : public Doctor
{
    public:
        BoneDoctor();
        BoneDoctor(string  ,string ,string ,string ,string ,int );

        void DisplayBoneDoctorData();


};

#endif // BONEDOCTOR_H

