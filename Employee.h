#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>

class Employee
{
    protected:
        int payRate; // hourly payRate
        float energyLevel;   // Initially 100%
    public:
        Employee(int payRate);    // creates a Employee with payRate
        void takeABreak(int mins);
        virtual void work(int mins)=0;
        virtual float pay()=0;
        void set_payRate(int number1);
        void set_energyLevel(float number2);
        int get_payRate();
        float get_energyLevel();
};
#endif
