#ifndef _CASUAL_H_
#define _CASUAL_H_
#include<string>
#include "Employee.h"
class Casual :public Employee
{
    public:
        Casual(int payrate);
        void set_dayCount(int number);
        int get_dayCount();
        void endWorkDay();
        void work(int mins);
        float pay();
    private:
        float hoursWorked[7];
        int dayCount;
};
#endif