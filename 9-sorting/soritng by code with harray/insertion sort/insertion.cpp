

// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
// The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and 
// placed at the correct position in the sorted part.


// Characteristics of Insertion Sort:
// This algorithm is one of the simplest algorithm with simple implementation
// Basically, Insertion sort is efficient for small data values
// Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.


// Time Complexity: O(N^2)
// Auxiliary Space: O(1)


// Step 1 − If it is the first element, it is already sorted. return 1;
// Step 2 − Pick next element
// Step 3 − Compare with all elements in the sorted sub-list
// Step 4 − Shift all the elements in the sorted sub-list that is greater than the 
//          value to be sorted
// Step 5 − Insert the value
// Step 6 − Repeat until list is sorted



// insertionSort(array)
//   mark first element as sorted
//   for each unsorted element X
//     'extract' the element X
//     for j <- lastSortedIndex down to 0
//       if current element j > X
//         move sorted element to the right by 1
//     break loop and insert X here
// end insertionSort

// working of algo best on this page
// https://www.geeksforgeeks.org/insertion-sort/
// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-52/

#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i <size; i++)
    {
        cout << " " << arr[i] << "";
    }
}

void insertionSort(int arr[], int size)
{
    int key, j;
    for(int i = 1; i<=size-1; i++)
    {
        // 2 3 4 5 1
        // 1 2 3 4 5
        key = arr[i];
        for(j = i-1;  j>=0 && arr[j]>key; j--)
            arr[j+1] = arr[j];
        arr[j+1] = key;
    }
}

int main()
{
    int arr[5] = {5,2,4,3,1};
    printArr(arr,5);
    cout << "\nafter sorting" << endl;
    insertionSort(arr, 5);
    printArr(arr,5);
    return 0;
}