#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int s,k,r=0,w[100],x[100],m,n;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"w["<<i<<"]=";
        cin>>w[i];
        r=r+w[i];
    }

    for(int i=0;i<n;i++)
        x[i]=0;

    bkt(0,0,r,w,x,m,n);
    
    return 0;
}