#include <iostream>
#include<conio.h>
#include "Hospital.h"
#include "Doctor.h"
#include "Patient.h"
#include "Disease.h"
#include "Dentist.h"
#include "BoneDoctor.h"
#include "Room.h"
#include "Customer.h"
#include "Manager.h"
#include "CommonRoom.h"
#include "LuxoryRoom.h"
#include<vector>
using namespace std;

void fillVector(vector<Manager>&,vector<Room>&,vector<CommonRoom>&,vector<Room>&, vector<LuxoryRoom>&);
void vectorClass(vector<Hospital>&,vector<Doctor>&,vector<Doctor>&,vector<Disease>&,vector<Disease>&,vector<Patient>&,vector<Patient>&,vector<Dentist>&,vector<BoneDoctor>&);

int main()
{
    cout << endl<< endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";
    cout << endl<< endl << "\t\t\t" << "             >>>   HOSPITAL MANAGMENT SYSTEM  >>>                " << "\t\t\t"<<endl<<endl;
    vector <Hospital> h ;
    vector <Doctor> d1  ;
    vector <Doctor> d2;

    vector <Disease> de1 ;
    vector <Disease> de2 ;
    vector <Patient>  p1;
    vector <Patient> p2;
    vector <Dentist>  den;
    vector <BoneDoctor> Bn;

    vectorClass(h,d1,d2,de1,de2,p1,p2,den,Bn);


   cout << endl<< endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t";
     cout << endl << endl<< endl<< "\t\t\t" << "             ***>>>   HOTEL MANAGMENT SYSTEM  <<<***                      " << "\t\t\t"<<endl<<endl;
 //    cout << endl << "\t\t\t" << "-------------------------------------------------------------- " << "\t\t\t"<< endl;

    vector<Manager> m;
    vector<Room> r;
    vector<CommonRoom> C;
    vector<Room> r1;
    vector<LuxoryRoom> L;
    fillVector(m,r,C,r1,L);




    getch();
}


void vectorClass(vector<Hospital>&,vector<Doctor>&,vector<Doctor>&,vector<Disease>&,vector<Disease>&,vector<Patient>&,vector<Patient>&,vector<Dentist>&,vector<BoneDoctor>&)
{
    Hospital h(4,"SIR ZUBAIR SHAIKH","SADDAR KARACHI",25),h1;
    h1 = h;
    h1.DisplayHospitalData();


   Doctor d1("Dr ASAD REHMAN","DB-09","DIABITIES SPECIALIST",12364567,"MORNING 9AM TO 3PM","800Rs",45,5),doc2;
   doc2 = d1;
   doc2.DislayDoctorData();

    Doctor d2("Dr ABDUR REHMAN","DC-08","HEART SPECIALIST",12364567,"MORNING 9AM TO 3PM","800Rs",50,8);
    d2.DislayDoctorData();



   Disease de1("HEART PROBLEMS");
   Disease de2("DIABITIES PATIENT");

   Patient p1("JUNAID AKRAM","04",1236523,30,de1.DiseaseNameFunction(),"5 Sep 2019"),Pobj1;
   Pobj1 = p1;


   Patient p2("MUHAMMAD ALI","05",1526623,25,de2.DiseaseNameFunction(),"8 May 2019"),Pobj2;
   Pobj2 = p2;




   Dentist den("DR ALI AMIN","DN-06","DENTAL SURGEON","EVENING 8PM to 11PM","100Rs",8),den1;
   den1 = den;

   BoneDoctor Bn("Dr FAZAL HUQ","BN-07","ARTHOPEDIC SURGEON","MORNING 9AM TO 3PM","1500Rs",9),bn1;
    bn1 = Bn;

   Pobj1.DisplayPatientData();
   Pobj2.DisplayPatientData();

   den1.DisplayDensistData();
   bn1.DisplayBoneDoctorData();

}

void fillVector(vector<Manager>&,vector<Room>&,vector<CommonRoom>&,vector<Room>&, vector<LuxoryRoom>&)
{
     Manager m("MUHAMMAD FARHAT TAYYAB",9876545,2420513,"5000$","MT-98"),m2;
     m2 = m;
     m2.PrintManagerData();


    Room r("LUCKKY HOTEL MANAGMENT", 32,false,"MUHAMMAD RASID KAHN",9252458,3242347,true ,78,1,2),r2;
    r2 = r;
    r2.Printdata();


    CommonRoom C("LUCKKY HOTEL MANAGMENT",9,false,"SINGLE","100$",true) ,C2;
    C2 = C;
    C2.PrintCroomData();

    Room r1("LUCKKY HOTEL MANAGMENT", 23,true,"MUHAMMAD ALI KAHN",9254668,34646347,false ,80,2,1) , r3;
    r3 = r1;
    r3.Printdata();

    LuxoryRoom L("LUCKKY HOTEL MANAGMENT",9,true,"SINGLE","200$",true,true,"LAUNDRY AND IRON") ,L1;
    L1 = L;
    L1.PrintLroomData();



}
