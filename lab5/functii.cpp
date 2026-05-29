#include "header.h"
#include <iostream>

Node *createnode(int p)
{
    Node *nod=new Node;
    nod->pondere=p;
    nod->stanga=nullptr;
    nod->dreapta=nullptr;
    return nod;
}

int calculeazaLEP(Node *radacina,int nivel)
{
    if(radacina==nullptr) return 0;

    if(radacina->stanga==nullptr && radacina->dreapta==nullptr) {
        return radacina->pondere*nivel;
    }

    return calculeazaLEP(radacina->stanga,nivel+1)+calculeazaLEP(radacina->dreapta,nivel+1);
}
 
