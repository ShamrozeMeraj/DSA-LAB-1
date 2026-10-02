#include <iostream>
using namespace std;

template <class T>
int binarySearch(T arr[], int size, T value)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == value)
            return mid;

        if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[5] = {11, 12, 22, 25, 64};

    int value = 22;

    int index = binarySearch(arr, 5, value);

    if (index != -1)
        cout << "Value found at index: " << index << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}