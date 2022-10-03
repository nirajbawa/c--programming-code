#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    cout << "printing count from 1 to n" << endl;
    for(int a = 1; a<=n; a++)
    {
        cout << ":" << a <<":"<<endl;
    }
}