#ifndef DENTIST_H
#define DENTIST_H
using namespace std;
#include "Doctor.h"
class Dentist : public Doctor
{
    public:
        Dentist();
        Dentist(string n ,string i,string f ,string t,string fe,int r);
        void DisplayDensistData();


    protected:

    private:
};

#endif // DENTIST_H
