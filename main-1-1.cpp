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
    for (int j =0;j<2;j++)
    {
        cout<<q[j]->get_energyLevel();
        cout<<q[j]->get_payRate();
    }
    return 0;
}