#include <iostream>
#include <chrono>
#include "header.h"

using namespace std;

int main() {
    int n = 8;
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8};

    // --- CAZUL 1: CRESCATOR ---
    cout << "Crescator: ";
    auto start = chrono::high_resolution_clock::now();
    
    batcher(a, 0, n, 1); // Măsurăm doar algoritmul
    
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> diff = end - start; // Folosim milisecunde pentru precizie

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\nTimp: " << diff.count() << " ms\n\n";

    // --- CAZUL 2: DESCRESCATOR ---
    int b[] = {6, 5, 4, 3, 2, 1}; // Reinițializăm datele
    cout << "Descrescator: ";
    
    start = chrono::high_resolution_clock::now(); // Doar actualizăm, fără "auto"
    batcher(b, 0, n, 1);
    end = chrono::high_resolution_clock::now();
    
    diff = end - start;
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    cout << "\nTimp: " << diff.count() << " ms\n\n";

    // --- CAZUL 3: ALEATOR ---
    int c[] = {2, 9, 5, 7, 1, 4};
    cout << "Aleator: ";
    
    start = chrono::high_resolution_clock::now();
    batcher(c, 0, n, 1);
    end = chrono::high_resolution_clock::now();
    
    diff = end - start;
    for(int i = 0; i < n; i++) cout << c[i] << " ";
    cout << "\nTimp: " << diff.count() << " ms\n";

    return 0;
}