#include <iostream>
using namespace std;

int main()
{

    // box A A A A pattern
    // int num;
    // cout << "Enter number : ";
    // cin >> num;
    // if(num<65)
    // {
    //     num = num +  65 - 1;
    // }
    // int i = 65;
    // char word;
    // while(i<=num)
    // {
    //     int j = 65;
    //     while(j<=num)
    //     {
    //         word = i;
    //         cout << word << " ";
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // OR

    int num;
    cout << "Enter number : ";
    cin >> num;
    int row = 1;
    while(row<=num)
    {
        int col = 1;
        while(col<=num)
        {
            char ch = 'A' + row - 1;
            cout << ch  << " ";
            col = col+1;
        }
        cout << endl;
        row = row+1;
    }


}