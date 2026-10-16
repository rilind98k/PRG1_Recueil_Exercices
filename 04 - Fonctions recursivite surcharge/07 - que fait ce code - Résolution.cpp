//
// Created by Rilind on 13.10.2026.
//
#include <cstdlib>
#include <iostream>

using namespace std;
void mystere(int& a, int& b);

int main() {
    int x = 3, y = 4;
    mystere(x, y);      // a = 3 et b = 4
    cout << "x = " << x << " " << "y = " << y << endl;
    return EXIT_SUCCESS;
}

void mystere(int& a, int& b) {
    a = a - b;          // a = 3 - 4, donc -1
    b = b + a;          // b = 4 + (-1), donc 3
    a = b - a;          // a = 3 - (-1), donc 4
}

// La fonction mystère est une fonction qui permet d'échanger la value initiale de a et b.

