#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int max_of_rest = findMax(arr, n - 1);
    return (arr[n - 1] > max_of_rest ? arr[n - 1] : max_of_rest);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = findMax(arr, n);
    cout << "The biggest element on the array is: " << max;

    return 0;
}