#include <iostream>
using namespace std;

int main()
{
    // triangle count pattern using while loop
    int num;
    cout << "Enter number : ";
    cin >> num;

    int row = 1;
    int count = 1;

    while(row<=num)
    {
        int col = 1;
        while (col<=row)
        {
            cout << count << " ";
            count = count+1;
            col = col+1;
        }
        cout << endl;
        row = row+1;
    }
}