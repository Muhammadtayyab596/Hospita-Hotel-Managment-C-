#ifndef MANAGER_H
#define MANAGER_H

#include "Customer.h"
class Manager : public Customer
{
    protected:
        string ManagerSalary;
        string ManagerID;
    public:
        Manager();
        Manager(string , int ,int,string,string);

        void PrintManagerData();





};

#endif // MANAGER_H
