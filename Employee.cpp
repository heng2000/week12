#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee(int payRate)
{
    energyLevel =100%;
    payRate =payRate;
}

void Employee:: takeABreak(int mins)
{
    energyLevel =energyLevel+mins*(20%);
}

void Employee:: set_payRate(int number1)
{
    payRate =number1;
}
void Employee:: set_energyLevel(float number2)
{
    energyLevel =number2;
}
int Employee:: get_payRate()
{
    return payRate;
}

float Employee:: get_energyLevel()
{
    return energyLevel;
}