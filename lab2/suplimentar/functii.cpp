#include <iostream>
#include <list>
#include "header.h"
using namespace std;

void inserare(string a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}

void radixsort(string a[],int n)
{
    list<string> pachete[256];
    int d=getd(a,n);
    for(int i=d-1;i>=0;i--)
    {
        
        //impachetare
        for(int j=0;j<n;j++)
        {
            int cuvant=0;
            if(i<a[j].length())
                cuvant=(unsigned char)a[j][i];
            else
                cuvant=0;
            pachete[cuvant].push_back(a[j]);
        }
        //despachetare
        int index=0;
        for(int j=0;j<256;j++)
        {
            for(string cuvant:pachete[j])
            {
                a[index++]=cuvant;
            }
            pachete[j].clear();
        }
    }
}

int getd(string a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if((int)a[i].length()>max) max=a[i].length();
    }
    return max;
}

void afisare(string a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
}