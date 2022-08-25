#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    // cout << "enter input for cin : ";
    // cin >> b;  // cin is basic input function of c++ use to get user input from keyboard

    cout << "enter input for cin.get : ";
    a = cin.get(); // the in function is read characters
    // from keyboard it also consider spaces, tab, new line in input.

    cout << "the value of a is : " << a <<endl; 
    // output is integer because a is integer so the output is typecasted in integer
    // output will the ASCII value of the character.

    // cout << "the output of cout function is : " << b << endl;
}