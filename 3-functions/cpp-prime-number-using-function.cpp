#include <iostream>
using namespace std;


bool primenumCheck(int num)
{
    for(int i = 2; i<num; i++)
        if(num%i == 0)
        {
            return 0;
        }
    return 1;
}

int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;
    int out = primenumCheck(num);
    if(out==0)
    {
        cout << "number is not prime";
    }
    else
    {
        cout << "number is prime";
    }
    return 0;
}

