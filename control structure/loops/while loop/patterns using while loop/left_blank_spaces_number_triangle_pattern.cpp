#include <iostream>
using namespace std;


int main()
{
    // left blank spaces number triangle pattern
    int num;
    cin >> num;
    int row =1;
    while(row<=num)
    {
        int col =1;
        while (col<=num-row)
        {
            cout << " ";    
            col = col +1;
        }
        col = 1;
        while(col<=row)
        {
            cout << row ;
            col = col+1;
        }
        cout << endl;
        row = row+1; 
    }
}