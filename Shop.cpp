#include<iostream>
#include "Employee.h"
#include "Manager.h"
#include "Casual.h"
#include "Shop.h"
using namespace std;

Shop::Shop()
{
    addEmployee_index =0;
    count =10;
    employees =new Employee*[5];
    for (int i =0;i<2;i++)
    {
        employees[i]  =new Manager(3);
    }
    for (int j =2;j<5;j++)
    {
        employees[j] =new Casual(8);
    }
}

void Shop:: addEmployee(Employee *employee)
{
    employees[addEmployee_index] =employee;
    addEmployee_index++;
}

int Shop:: get_count()
{
    return count;
}

Employee** Shop::get_employee()
{
    return employees;
}
Shop*Shop::createshop(int authority)
{
    if (authority>=10)
    {
        Employee*employees[5];
        shop*p;
        return p;
    }else{
        return nullptr;
    }
}