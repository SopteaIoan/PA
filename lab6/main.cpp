#include <iostream>
#include "header.h"
using namespace std;

int main()
{


    int n,x[10],M,w[10],p[10];

    cout<<"n=";
    cin>>n;

    cout<<"M=";
    cin>>M;

    for(int i=0;i<n;i++)
    {
        cout<<"w["<<i<<"]=";
        cin>>w[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<"p["<<i<<"]=";
        cin>>p[i];
    }

    obiect o[10];
    for(int i=0;i<n;i++)
    {
        o[i].w=w[i];
        o[i].p=p[i];
        o[i].r=o[i].p/o[i].w;
        o[i].index=i;
    }

    rucsac(o,n,M,x);

    double val=0;
    for(int i=0;i<n;i++)
        val=val+o[i].p*x[i];

    cout<<"val="<<val;
    
}