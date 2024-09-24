#include <iostream>
using namespace std;

int factorialRecursion(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorialRecursion(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number that you want to calculate it's factorial:  ";
    cin >> n;

    int result = factorialRecursion(n);
    cout << n << "! is: " << result;

    return 0;
}
