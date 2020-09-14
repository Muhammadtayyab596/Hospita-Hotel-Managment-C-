
#include "Hospital.h"
using namespace std;

Hospital::Hospital()
{
    //ctor
}
Hospital::Hospital(int nd ,string n  , string a,int r)
{
    Name = n;
    NumDoctors = nd;
    Address = a;
    Room = r ;
}

void Hospital::DisplayHospitalData()
{
    cout << endl  << "\t\t\t" << "HOSPITAL OWNER NAME  " << "\t\t\t" << Name <<  endl;
    cout << endl  << "\t\t\t" << "TOTAL DOCTORS  " << "\t\t\t\t" << NumDoctors <<  endl;
    cout << endl  << "\t\t\t" << "NUMBER OF ROOMS  " << "\t\t\t" << Room <<  endl;
    cout << endl  << "\t\t\t" << "HOSPITAL ADDRESS  " << "\t\t\t" << Address <<  endl;
    cout << endl  << "\t\t\t" << "NUMBER OF ROOMS  " << "\t\t\t" << Room <<  endl;
}
