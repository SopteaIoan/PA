#include <iostream>
#include "header.h"
using namespace std;

void bkt(int s,int k, int r, int w[], int x[], int m,int n)
{
    if(k==n) return;

    x[k]=1;
    if(s+w[k]==m)
    {
        afisare(x,n);
    }
    bkt(s+w[k],k+1,r-w[k],w,x,m,n);
    x[k]=0;
    bkt(s,k+1,r-w[k],w,x,m,n);
}

void afisare(int x[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}