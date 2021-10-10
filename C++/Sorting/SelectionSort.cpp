// Main function of the C++ program.

#include <bits/stdc++.h>
using namespace std;


// A function to implement bubble sort
void selectionSort(int arr[], int n)
{
    int i, j;
    for (i = 0 ; i < n - 1 ; i++ )
    {

        int min_idx = i;
        for( int j = i + 1 ; j < n ; j++ ) {
            if( arr[min_idx] > arr[j] ) {
                min_idx = j;
            }
        }
        swap( arr[min_idx], arr[i] );
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 112, 21, 89, 43};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}

/*
Output:
Sorted array:
11 12 22 25 34 64 90
*/
