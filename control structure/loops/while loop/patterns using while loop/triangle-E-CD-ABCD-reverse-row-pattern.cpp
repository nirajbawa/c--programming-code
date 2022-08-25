#include <iostream>
using namespace std;

int main()
{
    // triangle E CD ABCD reverse row pattern
    int num;
    cout << " Enter number : ";
    cin >> num;
    int row =1;
    while(row<=num)
    {
        int col = 1;
        char start = 'A' + num - row;
        while (col<=row)
        {
            cout << start << " ";
            start = start+1;
            col =col+1;
        }
        cout << endl;
        row = row +1;
        
    }
}