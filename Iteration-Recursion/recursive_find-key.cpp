#include <iostream>
using namespace std;

const int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
const int n = sizeof(arr) / sizeof(arr[0]);

int recursive_BinarySearch(int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return recursive_BinarySearch(mid + 1, high, key);
    else
    {
        return recursive_BinarySearch(low, mid - 1, key);
    }
}

int main()
{
    int key;
    cout << "Enter the key: ";
    cin >> key;

    int result = recursive_BinarySearch(0, n - 1, key);

    if (result != -1)
    {
        cout << "Key is on index " << result;
    }
    else
    {
        cout << "Key couldn't found.";
    }

    return 0;
}