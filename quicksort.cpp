#include <iostream>
using namespace std;

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    while (i < j)
    {
        while (i <= h && A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;

        if (i < j)
        {
            swap(A[i], A[j]);
        }
    }
    swap(A[l], A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int j = partition(A, l, h);
        QuickSort(A, l, j - 1);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    int arr[9] = {11, 17, 9, 13, 16, 7, 4, 10, 6};
    int n = 9;

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}