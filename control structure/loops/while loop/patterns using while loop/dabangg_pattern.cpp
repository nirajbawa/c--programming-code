#include <iostream>
using namespace std;

int main()
{
    // dabangg pattern
    int num;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= (num - row + 1))
        {
            cout << col;
            col = col + 1;
        }

        col = 1;
        while (col <= (row - 1))
        {
            cout << "*";
            col = col + 1;
        }
        col = 1;
        while (col <= (row - 1))
        {
            cout << "*";
            col = col + 1;
        }
        
        int lt = num-row+1;
        while(lt)
        {
            cout << lt;
            lt = lt - 1;
        }
        cout << endl;
        row = row + 1;
    }
}