#include <iostream>
using namespace std;

int main()
{
    int num;
    bool status = 0;
    cout << "enter number : ";
    cin >> num;
    for(int i = 2; i<num; i++)
    {
        if(num%i == 0)
        {
            status = 1;
            break;
        }
        i++;
    }

    if(status)
    {
        cout << "number is not prime";
    }
    else
    {
        cout << "number is prime";
    }
}