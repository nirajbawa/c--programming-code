#include <iostream>
using namespace std;

int main()
{
    // row number blank triangle pattern
    int num;
    cin >> num;
    int row =1;
    while(row<=num)
    {
        int col = 1;
        while (col <= (row-1))
        {
            cout << " ";
            col = col+1;
        }
        col = 1;
        while(col<=(num-row+1))
        {
            cout << col+row-1;
            col = col+1;
        }
        cout << endl;
        row = row+1;
        
    }
}