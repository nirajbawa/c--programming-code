#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    int row = 1;
    while(row<=num)
    {
        int col = 1;
        while (col<=row)
        {
            char ch = 'A'+row-1;
            cout << ch << " ";
            col = col+1;
        }
        cout << endl;
        row = row+1;
        
    }
}