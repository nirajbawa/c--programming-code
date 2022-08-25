#include <iostream>
using namespace std;

int main()
{
    // triangle number pattern using while loop
     int num;
     cout << "Enter number : ";
     cin >> num;
     int row = 1;
    while(row<=num)
    {
        int col = 1;
        while(col <= row)
        {
            cout << row;
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
}