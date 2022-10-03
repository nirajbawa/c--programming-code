#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "please enter number : ";
    cin >> a;
    int i = 1;
    for(;;)
    {
        if(i<=a)
        {
            cout << "the value of i is : " << i << endl;
        }
        else
            break;
        i++;
    }
}