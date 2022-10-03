#include <iostream>
using namespace std;

int main()
{
    // fibonacci series using for loop and with out third variable
    int len;
    int a = 0;
    int b = 1;

    cout << "enter number : ";
    cin >> len;

    cout << a << " " << b << " ";

    for(int i = 1; i<=len; i++)
    {
        // int temp = a+b;
        b = a+b;
        cout << b << " ";

        a = b-a;
    }

}