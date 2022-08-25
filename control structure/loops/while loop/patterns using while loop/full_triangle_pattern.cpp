#include <iostream>
using namespace std;

int main()
{
    // full triangle pattern
    int num;
    cin >> num;
    int row = 1;
    while(row<=num)
    {
        int col = 1;
        while (col<=(num-row))
        {
            cout << " ";
            col = col +1;
        }
        col =1;
        while(col<=row)
        {
            cout << col;
            col = col+1;
        }
        col =1;
         while(col<=row-1)
        {
            cout << row-col;
            col = col+1;
        }
        cout  << endl;
        row = row+1;
        
    }
}