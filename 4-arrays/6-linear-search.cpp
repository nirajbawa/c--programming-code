#include <iostream>
#include <typeinfo>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int count = 0; count < size; count++)
    {
        if(arr[count] == key)
            return true;
            break;
    }
    return false;
}

int main()
{
    int size  = 5;
    int arr[20] = {5,2,65,4,8};
    int key = 5;
    bool result = search(arr, size, key);
    if(result==1)
        cout << "the key is found in array";
    else   
        cout << "the key is not found in array";
    return 0;
}