#include <iostream>
using namespace std;

int main()
{
    int a = 3; // this variable is have global scope for this function
    cout << a << endl; 

    if(true)
    {
        int b = 5; //this variable is local variable fo this block
        cout << b << endl;
    }
    // we cant declare same name variable for same scope or same block
    int b = 1; // this variable is global  for main function it is accessable in inner block 
    // but block variable is not accessable in outof block
    cout << b << endl; 

    return 0;
}