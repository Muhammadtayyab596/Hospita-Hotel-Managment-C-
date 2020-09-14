
#include "Manager.h"
using namespace std;
Manager::Manager()
{
    //ctor
}

Manager::Manager(string n, int cnic ,int c,string m,string mId )
{
            CustomerName = n;
             CustomerCNIC = cnic;
            CoustomerPhoneNum = c;
            ManagerSalary = m;
            ManagerID = mId;

}

void Manager::PrintManagerData()
{
    cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";
    cout << endl << "\t\t\t" << "               >>>   MANAGER DATA   >>>                      " << "\t\t\t";
    cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t"<< endl;
    cout << endl << "\t\t\t" << "MANAGER NAME " << "\t\t\t" <<  CustomerName << endl;
    cout << endl << "\t\t\t" << "MANAGER CNIC " << "\t\t\t" <<  CustomerCNIC << endl;
    cout << endl << "\t\t\t" << "MANAGER PHONE NUMBER " << "\t\t" <<  CoustomerPhoneNum << endl;
    cout << endl << "\t\t\t" << "MANAGER SALARY " << "\t\t\t" <<  ManagerSalary << endl;
    cout << endl << "\t\t\t" << "MANAGER ID " << "\t\t\t" <<  ManagerID << endl;


}
