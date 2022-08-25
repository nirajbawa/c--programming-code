#include <iostream>
using namespace std;

int main()
{
    // left side blank triangle pattern
    int num;
    cin >> num;
    int row = 1;
    int count = 1;
    while (row<=num)
    {
        int col = 1;
        while(col<=(num-row))
        {
            cout << " ";
            col = col +1;
        }
        col =1;
        while(col <= row)
        {
            cout << count;
            col = col+1;
            count = count+1;
        }
        cout << endl;
        row = row +1;

    }
    
}

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16