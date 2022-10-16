#include <iostream>
using namespace std;

void print_arr(int arr[], int size)
{
    cout << "\n\n";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " "; 
    }
    cout << "\n\n";
}

int partition_arr(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;

    do{
        while (arr[i]<=pivot)
        {
            i++;
        }

        while (arr[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
    }while(i<j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

int quicksort(int arr[], int low, int high)
{
    int partition;
    if(low<high)
    {
        partition = partition_arr(arr, low, high);
        quicksort(arr, low, partition-1);
        quicksort(arr, partition+1, high);
    }
}

int main()
{
    int arr[] = {2,4,3,9,1,4,8,7,5,6};
    int size = 10;
    print_arr(arr, size);
    quicksort(arr, 0, size-1);
    print_arr(arr,size);
    
    return 0;
}


