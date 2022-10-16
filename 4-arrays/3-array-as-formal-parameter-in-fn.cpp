#include <iostream>
using namespace std;

int updatearr(int arr[], int size)
{
    arr[2] = 20;
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    // array as formal parameter in function
    // when we pass array as argument in function 
    // then in function not make copy of the array in function
    // it only copy the arr[0] 0 element of array is copy in
    // formal parameter of function form 0th element we can track author element of array
    // so when we update array in function then it effect is for global array because it not make copy of array so
    // we can perform any operation on this array it's effect on actual array also.
    
    int size = 3;
    int arr[] = {1,2,3};
    cout << "main before fn call" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << "updatearr after fn call\n";
    updatearr(arr, size);
    cout << "main call\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    
    return 0;    
}