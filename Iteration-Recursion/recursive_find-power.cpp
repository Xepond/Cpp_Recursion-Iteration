#include <iostream>
using namespace std;

double recursive_findPower(double base, int exponent)
{
    if (exponent == 0)
        return 1; // Taban durumu
    if (exponent < 0)
        return 1 / recursive_findPower(base, -exponent);

    return base * recursive_findPower(base, exponent - 1);
}

int main()
{
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = recursive_findPower(base, exponent);
    cout << base << " to the power of (" << exponent << ") is: " << result;

    return 0;
}