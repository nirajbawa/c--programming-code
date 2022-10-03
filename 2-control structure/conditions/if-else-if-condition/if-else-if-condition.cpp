#include <iostream>
using namespace std;

int main()
{

    // program to check A is postitive or negative or 0 using else if 

    int a;
    cout << "enter the value of a : " << endl;
    cin >> a;

    if(a>0)
    {
        cout << "A is positive" << endl;
    }
    else if(a<0)
    {
        cout << "A is negative" << endl;
    }
    else{
        cout << "A is 0" << endl;
    }
}