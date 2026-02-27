#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

double calcY(double a, double b, double x) {
    double t = x * x + a;
    return pow(sin(t * t), 3) - sqrt(x / b);
}

double calcZ(double a, double b, double x) {
    return x * x / a + pow(cos(x + b), 3);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, x;
    cout << "Введіть a, b, x: ";
    cin >> a >> b >> x;

    double y = calcY(a, b, x);
    double z = calcZ(a, b, x);

    cout << y << " " << z;
    return 0;
}