#include <iostream>
using namespace std;

int printArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< endl;
    }
    
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    printArr(arr, size);
    cout << "hello" << endl;
}