#include <iostream>
using namespace std;

int recursiveFibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number that you want to calculate it's fibonacci value: ";
    cin >> n;

    int result = recursiveFibonacci(n);
    cout << "F(" << n << ") is: " << result;

    return 0;
}