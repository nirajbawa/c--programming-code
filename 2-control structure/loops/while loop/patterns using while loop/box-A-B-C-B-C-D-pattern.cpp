#include <iostream>
using namespace std;

int main()
{
    // box A B C 
    // B C D pattern
    int num;
    cout << "Enter number : ";
    cin >> num;
    int row = 1;
    while (row<=num)
    {
        int col =1;
        while(col<=num)
        {
            char ch = 'A' + (row + col) - 2;
            cout << ch << " ";
            col = col+1;
        }
        cout << endl;
        row = row+1;  
    }
    
}