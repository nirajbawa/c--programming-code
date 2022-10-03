#include <iostream>
using namespace std;

int oddEven(int n)
{
    if(n&1)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;
    int out = oddEven(num);
    if(out == 1)
    {
        cout << "number is even";
    }
    else
        cout << "number is odd";
    return 0;
}