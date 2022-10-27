#include "Employee.h"
#include<iostream>
using namespace std;
int main ()
{
    Employee *q[2];
    for (int i =0;i<2;i++)
    {
        q[i]->set_payRate(i);
        q[i]->set_energyLevel(i);
    }
    return 0;
}