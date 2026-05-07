#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    string a[100];
    int n;
    cout<<"n=";
    cin>>n;
    inserare(a,n);
    radixsort(a,n);
    cout<<endl;
    afisare(a,n);
    return 0;
}