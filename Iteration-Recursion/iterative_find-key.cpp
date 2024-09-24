#include <iostream>
using namespace std;

const int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
const int n = sizeof(arr) / sizeof(arr[0]);

int iterative_findKey(int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int key;
    cout << "Enter the key: ";
    cin >> key;

    int result = iterative_findKey(key);
    if (result != -1)
    {
        cout << "The key is found on index " << result;
    }
    else
    {
        cout << "The key couldn't found.";
    }

    return 0;
}