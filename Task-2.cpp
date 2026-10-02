#include <iostream>
using namespace std;

template <class T>
int linearSearch(T arr[], int size, T value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return i;
    }

    return -1;
}

int main()
{
    int arr[5] = {64, 25, 12, 22, 11};

    int value = 12;

    int index = linearSearch(arr, 5, value);

    if (index != -1)
        cout << "Value found at index: " << index << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}