// main.cpp 
// Степанчук Сергій 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 20

#include <iostream> 
#include <cmath>

using namespace std;

void main() {
    double x, y, R; // input

    cout << "R = "; cin >> R;  

    if (R > 3) {
        cout << "R < 3 must" << endl;
        return;
    }

    cout << "x = "; cin >> x;

    if (x < 0)
        y = x / -2;
    else if (x <= R)
        y = R - sqrt(R * R - x * x);
    else if (x <= 2 * R)
        y = sqrt(R * R - pow(x - R, 2));
    else y = x / -6;

    cout << endl << "y = " << y << endl;
}