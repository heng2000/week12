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
    return 0;
}