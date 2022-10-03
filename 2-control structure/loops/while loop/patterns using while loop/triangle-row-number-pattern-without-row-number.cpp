#include <iostream>
using namespace std;

int main()
{
    // triangle row number pattern without row number using while loop
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int row = 1;

    while(row<=num)
    {
        int col = 1;
        while(col<=row)
        {
            cout << (row+col-1) << " ";
            col = col+1;
        }
        cout << endl;
        row = row+1;
    }

}