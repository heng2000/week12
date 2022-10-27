#include "Casual.h"
#include "Employee.h"
#include<iostream>
using namespace std;
Casual::Casual(int a):Employee(a)
{
    for (int i =0;i<7;i++)
    {
        hoursWorked[i] =0;
    }
    dayCount =0;
}

void Casual:: set_dayCount(int number)
{
    dayCount =number;
}

int Casual:: get_dayCount()
{
    return dayCount;
}
void Casual:: work(int mins)
{
    energyLevel =energyLevel-0.5*mins;
    if (energyLevel<0||mins>=200)
    {
        energyLevel =0;
        Casual::hoursWorked[dayCount] =200/60;
        Casual::endWorkDay();
        return ;
    }
    hoursWorked[dayCount] =mins;
    Casual::endWorkDay();
}

float Casual:: pay()
{
    float result;
    for (int i =0;i<dayCount;i++)
    {
        result  =result+Casual::hoursWorked[i];
    }
    result  =payRate*result;
    dayCount =0;
    for (int q =0;q<Casual::dayCount;q++)
    {
        hoursWorked[q] =0;
    }
    return result;
    
}
void Casual:: endWorkDay()
{
    dayCount++;
    energyLevel =100;
}