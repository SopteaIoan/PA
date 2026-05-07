#ifndef ceva
#define ceva

struct obiect
{
    double w;
    double p;
    double r; //ratio
    int index;
};

void rucsac(obiect o[10], int n, int M, double x[]);
void bubblesort(obiect o[10],int n);

#endif