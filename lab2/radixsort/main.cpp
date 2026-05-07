#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int a[100],n;
    cout<<"n=";
    cin>>n;
    inserare(a,n);
    radixsort(a,n);
    cout<<endl;
    afisare(a,n);
    return 0;
}