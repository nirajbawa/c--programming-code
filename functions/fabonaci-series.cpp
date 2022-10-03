#include <iostream>
using namespace std;

int fabo(int *num)
{
    cout << *num << endl;
    int f = 0, s = 1, t = 0;;
    cout << "0 1";
    
    for(int i = 3; i<=*num; i++)
    {
       
        t = f+s;
        f = s;
        s = t;
        cout << " " << t << " ";
    }
}



int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    fabo(&num);
    faboR(&num);
    return 0;
}