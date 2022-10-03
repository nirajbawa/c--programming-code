#include <iostream>
using namespace std;

int main()
{

    // program to check number is prime or not
    int num, i = 2, flag = 0;
    cout << "Enter number : ";
    cin >> num;
    
    while(i<num)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }
        i = i+1;
    }

    if(flag==1)
    {
        cout << "Number is not prime";
    }
    else
    {
        cout << "Number is prime";
        
    }
    
}