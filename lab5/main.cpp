#include <iostream>
#include <queue>
#include <vector>
#include "header.h"

using namespace std;

int main()
{
    priority_queue<Node*,vector<Node*>,ComparaNoduri> B;
    int n,val;

    cout<<"n=";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<"pondere pentru nodul "<<i+1<< ": ";
        cin>>val;
        B.push(createnode(val));
    }

    while (B.size() > 1)
    {
        Node *t1=B.top(); 
        B.pop();
        
        Node *t2=B.top();
        B.pop();

        Node *parinte=createnode(t1->pondere+t2->pondere);
        parinte->stanga=t1;
        parinte->dreapta=t2;

        B.push(parinte);
    }
    Node *radacinaFinala=B.top();
    int rezultat=calculeazaLEP(radacinaFinala,0);
    cout<<"lep="<<rezultat<<endl;
    return 0;
}
