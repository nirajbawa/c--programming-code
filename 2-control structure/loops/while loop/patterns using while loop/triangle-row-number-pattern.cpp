#include <iostream>
using namespace std;

int main()
{
    // triangle row number pattern using while loop
    int num;
    cout << "Enter number : ";
    cin >> num;
    int row = 1;
    while(row<=num)
    {
        int col = 1;
        int rowNum = row;
        while(col<=row)
        {
            cout << rowNum << " ";
            rowNum = rowNum+1;
            col = col+1;
        }
        cout << endl;
        row = row +1;
    }
}