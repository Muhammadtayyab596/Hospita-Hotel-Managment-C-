
#include "Patient.h"
using namespace std;
Patient::Patient()
{
   // PatientNum = PatientNum + 1;
}
Patient::Patient(string n ,string i, int p ,int a,string f,string lv)
{
    Name = n ;
    ID  = i ;
    phoneNum = p ;
    Age = a ;
    field  = f;
    LastVist = lv;
    //PatientNum = pn;

}
void Patient::DisplayPatientData()
{
    cout << endl  << "\t\t\t" << "--------------------------------------------------  " ;
    cout << endl  << "\t\t\t" << "               *** PATIENT INFORMATION ***           ";
    cout << endl  << "\t\t\t" << "--------------------------------------------------  " << endl;
    cout << endl  << "\t\t\t" << "PATIENT NAME  " << "\t\t\t" << Name <<  endl;
    cout << endl  << "\t\t\t" << "PATIENT NUMBER  " << "\t\t" << ID <<  endl;
    cout << endl  << "\t\t\t" << "PATIENT AGE  " << "\t\t\t" << Age <<  endl;
    cout << endl  << "\t\t\t" << "PATIENT DISEASE   " << "\t\t" << field <<  endl;
    cout << endl  << "\t\t\t" << "PATIENT PHONE NO. " << "\t\t" << phoneNum <<  endl;
    cout << endl  << "\t\t\t" << "PATIENT LAST VISIT " << "\t\t" << LastVist <<  endl;


}
