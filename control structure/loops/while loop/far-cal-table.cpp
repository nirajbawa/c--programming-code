#include <iostream>
using namespace std;

// fahrenheit to celsius table using while loop

int main()
{
    float cal, far=-50;
    while(far<=1000)
    {
        cal = (far-32)/1.8;
        cout << far << " is equal to : " << cal << " cal" << endl;
        far = far + 10;
    }
}