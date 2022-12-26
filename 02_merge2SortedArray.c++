#include <iostream>
#include <array>
using namespace std;

int merge2SortedArray(int arr1[], int m, int arr2[], int n)
{
    int i = 0, j = 0, t = 0;
    int k = m + n;
    int arr3[k];
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[t] = arr1[i];
            i++;
            t++;
        }
        else
        {
            arr3[t] = arr2[j];
            j++;
            t++;
        }
    }
    while (i<m)
    {
        arr3[t]=arr1[i];
        i++;
        t++;
    }
    while (j<n)
    {
        arr3[k]=arr2[j];
        j++;
    }
    
    for (int i = 0; i < k; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
}

int main()
{

    // array<int,5> arr1={1,3,5,7,9};
    // array<int,3> arr2={2,4,6};
    int size1 = 5;
    int size2 = 3;

    int arr1[size1] = {1, 3, 5, 7, 9};
    int arr2[size2] = {2, 4, 6};

    merge2SortedArray(arr1, size1, arr2, size2);

    return 0;
}