#include <iostream>
using namespace std;

int main()
{
    int a = 2*3/4+5; //the precedence of operators are denpends on oprecedence table 
    cout << a << endl;
    int b = (2*(3/4))+5; // after adding bracket we can control the precedence
    cout << b;
}