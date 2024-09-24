#include <iostream>
using namespace std;

int factorialIterative(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the number that you want to calculate it's factorial: ";
    cin >> n;

    int result = factorialIterative(n);
    cout << n << "! is: " << result;
    return 0;
}