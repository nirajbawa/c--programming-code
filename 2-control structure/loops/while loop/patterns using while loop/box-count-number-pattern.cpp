#include <iostream>
using namespace std;


int main()
{
    // box count number pattern using while loop
    int num;
    cout << "enter number : ";
    cin >> num;
    int i = 1;
    int count = 0;

    while(i<=num)
    {
        int j = 1;
        while(j<=num)
        {
            cout << " " << count << " ";
            count = count+1;
            j = j+1; 
        }
        cout << endl;
        i = i+1;
    }
}