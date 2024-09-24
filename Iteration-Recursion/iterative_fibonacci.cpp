#include <iostream>
using namespace std;

int iterativeFibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int a = 0, b = 1, c;
    // cout << "F(0):" << a << " ";
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        // cout << "F(" << i + 1 << "):" << a << " ";
    }
    return a;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = iterativeFibonacci(n);
    cout << "F(" << n << ") is: " << result;

    return 0;
}