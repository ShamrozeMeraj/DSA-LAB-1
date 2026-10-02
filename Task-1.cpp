#include <iostream>
#include <string>
using namespace std;

template <class T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

template <class T>
void selectionSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int small = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[small])
                small = j;
        }

        T temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
}

int main()
{
    int arr[5] = {64, 25, 12, 22, 11};

    cout << "Original: ";
    printArray(arr, 5);

    selectionSort(arr, 5);

    cout << "Sorted: ";
    printArray(arr, 5);

    return 0;
}