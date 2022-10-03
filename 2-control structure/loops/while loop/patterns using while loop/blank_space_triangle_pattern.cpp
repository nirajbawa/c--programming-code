#include <iostream>
using namespace std;

int main()
{
    // blank space triangle pattern
    int num;
    cin >> num;
    int row = 1;
    while(row<=num)
    {
        int spaces = num-row;
        while(spaces)
        {
            cout << " ";
            spaces = spaces-1;
        }

        int col = 1;
        while (col<=row)
        {
            cout << "*";
            col = col+1;
        }
        cout << "\n"; 
        row = 1 + row;


    }
    
}