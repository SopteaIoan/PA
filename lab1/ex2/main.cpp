#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int n = 4, cnt = 1;
    int a[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = cnt++;

    afisare(a, n);
    cout<<endl<<endl<<endl;
    trans(a,n);
    invers(a,n);
    afisare(a,n);
    return 0;
}