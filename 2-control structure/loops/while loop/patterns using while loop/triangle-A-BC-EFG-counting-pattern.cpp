#include <iostream>
using namespace std;

int main()
{
    // triangle A BC EFG counting pattern 
    int num;
    cout << "Enter number : ";
    cin >> num;
    int row = 1;
    int value = 1;
    while(row<=num)
    {
        int col = 1;
        while(col<=row)
        {
            char ch = 'A' + value - 1;
            cout << ch << " ";
            value = value+1;
            col = col+1;
        }
        cout << endl;
        row = row +1;
    }
}