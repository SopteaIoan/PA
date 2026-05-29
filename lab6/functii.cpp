#include <iostream>
#include "header.h"
using namespace std;

void rucsac(obiect o[10],int n,int M,double x[]) {
    double C=0; 
    for(int i=0;i<n;i++) 
        x[i] = 0;

    bubblesort(o,n); 

    for(int i=0;i<n && C<M;i++) {
        if(C+o[i].w<=M) {
            C=C+o[i].w;
            x[o[i].index]=1;
        } 
        else 
        {
            x[o[i].index]=(M-C)/o[i].w; 
            C=M;
        }
    }
}

void bubblesort(obiect o[10],int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (o[j].r<o[j+1].r) 
            { 
                swap(o[j],o[j+1]);
            }
        }
    }
}
