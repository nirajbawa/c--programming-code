#include <iostream>
using namespace std;

int main(){
    // reverser number blank Triangle pattern
    int num;
    cin >> num;
    int row = 1;
    while(row<=num)
    {
        int col =1;
        while(col<=(row-1))      
        {
            cout << " ";
            col = col+1;
        }
        col =1;
        while(col<=(num-row+1))
        {
            cout << row;
            col = col +1;
        }
        cout << endl;
        row = row +1;
    }
}