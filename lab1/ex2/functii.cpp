#include <iostream>
#include "header.h"
using namespace std;

void afisare(int a[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void trans(int a[100][100], int n)
{
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            swap(a[i][j], a[j][i]);
}

void invers(int a[100][100], int n)
{
    for(int j = 0; j < n; j++)
        for(int i = 0; i < n / 2; i++)
            swap(a[i][j], a[n - i - 1][j]);
}