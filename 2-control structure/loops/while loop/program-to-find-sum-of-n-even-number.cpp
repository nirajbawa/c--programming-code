#include <iostream>
using namespace std;

int main()
{
    // program to find sum of n even number using while loop
    int num;
    cout << "enter number : "<< endl;
    cin >> num;
    int sum = 0, i=1;
    while(i<=num)
    {
        if(i%2==0)
        {
            sum = sum+i;
        }
         i = i+1;
    }
    cout << "the sum of integer numbers from 1 to "<< num << " is : "<<sum<<endl;
}