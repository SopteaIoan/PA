#include <iostream>
#include <list>
#include "header.h"
using namespace std;

void inserare(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}

void radixsort(int a[],int n)
{
    list<int> pachete[10];
    int d=getd(a,n);
    cout<<endl<<"*d="<<d<<"*"<<endl;
    int power=1;
    for(int i=0;i<d;i++)
    {
        
        //impachetare
        for(int j=0;j<n;j++)
        {
            int cifra=(a[j]/power)%10;
            pachete[cifra].push_back(a[j]);
        }
        //despachetare
        int index=0;
        for(int j=0;j<10;j++)
        {
            for(int numar:pachete[j])
            {
                a[index++]=numar;
            }
            pachete[j].clear();
        }
        power=power*10;
    }
}

int getd(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        int x=a[i],cnt=0;
        while(x!=0)
        {
            cnt++;
            x=x/10;
        }
        if(cnt>max) max=cnt;
    }
    return max;
}

void afisare(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
}