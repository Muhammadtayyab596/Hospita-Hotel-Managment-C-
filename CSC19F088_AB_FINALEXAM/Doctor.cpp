
#include "Doctor.h"
using namespace std;
Doctor::Doctor()
{
    //ctor
}
Doctor::Doctor(string n ,string i,string f ,int p ,string t,string fe,int a,int r )
{
    Name = n ;
    ID  = i ;
    field  = f;
    phoneNum = p ;
    Timing = t;
    Fees  = fe;
    Age = a ;
    Room  = r;

}

void  Doctor:: DislayDoctorData()
{
    cout << endl  << "\t\t\t" << "--------------------------------------------------  " ;
    cout << endl  << "\t\t\t" << "               *** DOCTOR INFORMATION ***           " ;
    cout << endl  << "\t\t\t" << "--------------------------------------------------  " << endl;
    cout << endl  << "\t\t\t" << "DOCTOR NAME  " << "\t\t\t" << Name <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR ID  " << "\t\t\t" << ID <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR AGE  " << "\t\t\t" << Age <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR SPICALIZED IN  " << "\t\t" << field <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR PHONE NO. " << "\t\t" << phoneNum <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR TIMING  " << "\t\t\t" << Timing <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR ROOM NO.  " << "\t\t" << Room <<  endl;
    cout << endl  << "\t\t\t" << "DOCTOR Fee  " << "\t\t\t" << Fees <<  endl;




}
