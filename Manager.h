#ifndef _MANAGER_H_
#define _MANAGER_H_
#include <iostream>

class Manager:public Employee
{
    public:
        Manager(int a);
        void set_hoursWorked(float number);
        float get_hoursWorked();
        void set_daysWorked(int numebr);
        int get_daysWorked();
        void work(int mins);
        float pay();
    private:
        float hoursWorked;
        int daysWorked;
};
#endif