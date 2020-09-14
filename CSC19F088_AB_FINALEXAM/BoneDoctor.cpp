
#include "BoneDoctor.h"
using namespace std;
BoneDoctor::BoneDoctor()
{
    //ctor
}
BoneDoctor::BoneDoctor(string n ,string i,string f ,string t,string fe,int r)
{
    Name = n ;
    ID  = i ;
    field  = f;
    Timing = t;
    Fees  = fe;
    Room  = r;
}

void BoneDoctor:: DisplayBoneDoctorData()
 {
     cout << endl  << "\t\t\t" << "--------------------------------------------------  " ;
    cout << endl  << "\t\t\t" << "               *** ARTHOPEDIC INFORMATION ***           " ;
    cout << endl  << "\t\t\t" << "--------------------------------------------------  " << endl;
    cout << endl  << "\t\t\t" << "DOCTOR NAME  " << "\t\t\t" << Name <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR ID  " << "\t\t\t" << ID <<  endl;

    cout << endl  << "\t\t\t" << "DOCTOR SPICALIZED IN  " << "\t\t" << field <<  endl;

    cout << endl  << "\t\t\t" << "DOCTOR TIMING  " << "\t\t\t" << Timing <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR ROOM NO.  " << "\t\t" << Room <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR Fee  " << "\t\t\t" << Fees <<  endl;
 }
