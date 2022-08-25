#include <iostream>
using namespace std;

int main()
{
    // program to find sum from 1 to n using while loop
    // sum formula to calculate 
    // sum = n/2(a+l)
    // ex : a or n = 1 and l = 100
    // = 100/2(1+100)
    // = 50 * 101 = 5050


    int n;
    cout << "Enter number : ";
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i<=n)
    {
        sum = sum + i;
        i = i+1;
    }
    
    cout << "The sum is : " << sum;
}