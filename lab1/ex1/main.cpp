#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    ldi *l=new ldi;
    l->insereaza(8,0);
    l->afisare();
    l->insereaza(7,0);
    l->afisare();
    l->insereaza(9,1);
    l->insereaza(10,100);
    l->afisare();
    l->insereaza(5,200);
    l->afisare();
    l->insereaza(1,2);
    l->afisare();
}