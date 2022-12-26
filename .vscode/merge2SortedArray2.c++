#include <iostream>
using namespace std;
int merge2Array(int arr1[], int size1, int arr2[], int size2)
{

    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[i] = arr2[i];
            i++;
        }
        else if (arr1[i] < arr2[j])
        {
            arr1[i] = arr2[j];
            i++;
            j++;
        }
        else if (arr1[i] == arr2[j])
        {
            i++;
            arr1[i] = arr2[j];
            j++;
        }
    }
}

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size1 = 6, size2 = 3;
    int arr1[size1] = {1, 2, 3};
    int arr2[size2] = {2, 5, 6};
    merge2Array(arr1, size1, arr2, size2);
    printArray(arr1, size1);
    return 0;
}