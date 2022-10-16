#include <iostream>
using namespace std;

void arrRev(int arr[], int size)
{   
    int countrev = size-1;
    for(int i = 0; i<size/2; i++)
    {
        int temp =  arr[countrev];
        arr[countrev] = arr[i];
        arr[i] = temp; 
        countrev--;
    }
}

int main()
{
    int size = 5;
    int arr[20] = {5,2,3,2,1};
    cout << "the array is : " << endl;
     for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    arrRev(arr, size);
    cout << "the reverse array is : " << endl; 
    for (int i = 0; i < size; i++)
    {
         cout << arr[i] << " ";
    }
    return 0; 
}