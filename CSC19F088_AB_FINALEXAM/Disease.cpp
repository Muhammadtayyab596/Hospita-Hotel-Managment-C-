
#include "Disease.h"
using namespace std;
#include <iostream>
Disease::Disease()
{
    //ctor
}
Disease::Disease(string disName)
{
    DiseaseName  = disName;
}


 string Disease::DiseaseNameFunction()
 {
     return DiseaseName;
 }
