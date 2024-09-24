#include <iostream>
using namespace std;

double iterative_findPower(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < abs(exponent); i++)
    {
        result *= base;
    }
    return (exponent < 0) ? 1 / result : result;
}

int main()
{
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = iterative_findPower(base, exponent);
    cout << "The result is: " << result;

    return 0;
}