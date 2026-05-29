#ifndef ceva
#define ceva

struct Node {
    int pondere;
    Node *stanga, *dreapta;
};

Node *createnode(int p);

struct ComparaNoduri {
    bool operator()(Node* a,Node* b) {
        return a->pondere > b->pondere;
    }
};

int calculeazaLEP(Node* radacina,int nivel);

#endif
