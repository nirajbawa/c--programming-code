#include <iostream>
using namespace std;

// array are container which is used to store multiple values in one variable

int main()
{
    //initalize all array indexes to 1
    int num = 100;
    int arr[100] = {0};
    for(int i = 0; i<100; i++)
        arr[i] = 1;

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}
  