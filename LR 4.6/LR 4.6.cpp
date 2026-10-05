// LR 4.6.cpp
// Кіц Роман Романович
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double P;
    int S;       // внутрішня сума (ціле число, максимум 210)
    int n, k;

    cout << scientific << setprecision(10);

    // 1 спосіб: вкладені while
    P = 1;
    n = 1;
    while (n <= 20)
    {
        S = 0;
        k = n;
        while (k <= 20)
        {
            S += k;
            k++;
        }
        P *= (1. * n * n + 1. * S * S) / (n + 1);
        n++;
    }
    cout << "while        : " << P << endl;

    // 2 спосіб: вкладені do..while
    P = 1;
    n = 1;
    do {
        S = 0;
        k = n;
        do {
            S += k;
            k++;
        } while (k <= 20);
        P *= (1. * n * n + 1. * S * S) / (n + 1);
        n++;
    } while (n <= 20);
    cout << "do..while    : " << P << endl;

    // 3 спосіб: вкладені for, лічильники зростають
    P = 1;
    for (n = 1; n <= 20; n++)
    {
        S = 0;
        for (k = n; k <= 20; k++)
        {
            S += k;
        }
        P *= (1. * n * n + 1. * S * S) / (n + 1);
    }
    cout << "for (++)     : " << P << endl;

    // 4 спосіб: вкладені for, лічильники спадають
    P = 1;
    for (n = 20; n >= 1; n--)
    {
        S = 0;
        for (k = 20; k >= n; k--)
        {
            S += k;
        }
        P *= (1. * n * n + 1. * S * S) / (n + 1);
    }
    cout << "for (--)     : " << P << endl;

    return 0;
}
