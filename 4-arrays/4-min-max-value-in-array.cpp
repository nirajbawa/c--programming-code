#include <iostream>
#include <limits.h>
using namespace std;

int getmax(int arr[], int size)
{

    unsigned int max = INT32_MIN;
    for(int i =0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[], int size)
{
    int min = INT32_MAX;
    for(int i = 0; i < size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;
    int arr[100];
    for(int i = 0; i<size; i++)
    {
        cout << "enter value of index " << i << " : ";
        cin >> arr[i];
    }
    cout << "the max value is = " << getmax(arr, size) << endl;
    cout << "the min value is = " << getmin(arr, size) << endl; 
    return 0;
}