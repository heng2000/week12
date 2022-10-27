#ifndef _SHOP_H_
#define _SHOP_H_
#include<string>
#include"Employee.h"
#include "Manager.h"
#include "Casual.h"
class shop
{
    public:
        Shop();
        void addEmployee(Employee *employee);
        int get_count();
        Employee**get_employee();
        static Shop*createshop(int authority);
    private:
        int count;
        Employee**employees;
        int addEmployee_index;

};
#endif