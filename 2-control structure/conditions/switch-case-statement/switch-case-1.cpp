#include <iostream>
using namespace std;

int main()
{
    //    note calculator using switch case
    int amount;
    cout << "enter the amount = ";
    cin >> amount;
    int ans;
    int option;
    cout << " 1.100 notes \n 2.50 notes \n 3.20 notes \n 4.10 notes \n\nEnter the option : ";
    cin >> option;

    switch (option)
    {
    case 1:
        ans = amount / 100;
        cout << "\namount = " << ans << endl;
        amount %= 100;
        break;

    case 2:
        ans = amount / 50;
        cout << "\namount = " << ans << endl;
        amount %= 50;
        break;

    case 3:
        ans = amount / 30;
        cout << "\namount = " << ans << endl;
        amount %= 30;
        break;

    case 4:
        ans = amount / 20;
        cout << "\namount = " << ans << endl;
        amount %= 20;
        break;

    case 5:
        ans = amount / 10;
        cout << "\namount = " << ans << endl;
        amount %= 10;
        break;

    default:
        break;
    }
}