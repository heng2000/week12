#include<iostream>
#include"Employee.h"
#include "Manager.h"
using namespace std;

Manager::Manager(int payrate): Employee(payrate)
{
}

void Manager:: set_hoursWorked(float number)
{
    hoursWorked =number;
}

float Manager:: get_hoursWorked()
{
    return hoursWorked;
}

void Manager:: set_daysWorked(int numebr)
{
    daysWorked =numebr;
}
int Manager:: get_daysWorked()
{
    return daysWorked;
}
void Manager:: work(int mins)
{
    energyLevel =energyLevel-0.25*mins;
    hoursWorked =mins/60;
    if (energyLevel<=0)
    {
        hoursWorked =0;
    }
    if (hoursWorked>=8)
    {
        daysWorked =daysWorked+1;
        hoursWorked =0;
        energyLevel =100;
    }
}

float Manager:: pay()
{
    if (hoursWorked==8)
    {
        float result =payRate*8;
        daysWorked =0;
        hoursWorked =0;
        return result;
    }
}
