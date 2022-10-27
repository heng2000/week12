#include <iostream>
#include"Casual.h"
#include<string>
using namespace std;
int main ()
{
    Casual *c[2];
    for (int i =0;i<2;i++)
    {
        c[i] =new Casual(2);
    }
    for (int j =0;j<2;j++)
    {
        int mins =0;
        cout<<"enter you hours: ";
        cin>>c[j]->work(mins);
    }
    for (int x =0;x<2;x++)
    {
        cout<<c[x]->hoursWorked();
    }
    return 0;
}