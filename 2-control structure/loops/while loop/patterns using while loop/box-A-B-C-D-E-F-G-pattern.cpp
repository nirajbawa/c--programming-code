#include <iostream>
using namespace std;

int main()
{
    // box A B C D E F G pattern
    int num;
    cout << "Enter number : ";
    cin >> num;
    int row = 1;
    char ch;
    int value = 1;
    while(row<=num)
    {
        int col = 1;
        while (col<=num)
        {
            ch = 'A' + value - 1;
            cout << ch << " ";
            col = col + 1; 
            value = value + 1;
        }
        cout << endl;
        row = row+1;
        
    }
}