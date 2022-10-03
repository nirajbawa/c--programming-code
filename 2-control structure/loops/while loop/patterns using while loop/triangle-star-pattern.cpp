#include <iostream>
using namespace std;

int main()
{
    // triangle star pattern using while loop
    int num;
    cout << "Enter number : ";
    cin >> num;
    int i = 1;

    while(i<=num)
    {
        int j = 1;
        while(j<=i)
        {
            cout << " * ";
            j = j+1;
        }
        cout << endl;
        i = i +1;
    }
}