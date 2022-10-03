#include <iostream>
using namespace std;

int main()
{
    // continue statement
    for(int i =0; i<=5; i++)
    {
        cout << "hi" << endl;
        cout << "byy" << endl;
        continue; // after writing continue statement the 
        // next code after continue statement are delete.
        cout << "hello";
    }
}