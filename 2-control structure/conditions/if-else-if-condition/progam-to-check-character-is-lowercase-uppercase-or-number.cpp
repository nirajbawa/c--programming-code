#include <iostream>
using namespace std;

int main()
{
    // progam to check given character is lowercase uppercase or number
     
    char ch;
    cout << "enter character : " << endl;
    cin >> ch;
    
    // if(ch=='A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch =='F' || ch =='G' || ch == 'H' || ch == 'I' || ch=='J' || ch == 'k' || ch == 'L' || ch == 'M' || ch == 'N' || ch == 'O' || ch=='P' || ch=='Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch =='U' || ch == 'V' || ch == 'W' || ch== 'X' || ch == 'Y' || ch == 'Z')
    // {
    //     cout << ch << " is uppercase alphabet." << endl;
    // }
    // else if(ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e' || ch == 'f' || ch=='g' || ch == 'h' || ch=='i' || ch == 'j' || ch=='k' || ch=='l' || ch == 'm' || ch == 'n' || ch == 'o' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'u' || ch== 'v' || ch == 'w'|| ch== 'x' || ch == 'y' || ch == 'z')
    // {
    //     cout << ch  << " is lowercase alphabet." << endl;
    // }
    // else{
    //     cout << ch << " is number or special character." << endl;
    // }

    // OR  
    if(ch>='a' && ch <= 'z')
    {
        cout << "this is lowercase";
    }
    else if(ch>='A' && ch <= 'Z')
    {
        cout << "this is uppercase";
    }
    else if(ch >= '0' && ch <= '9'){
        cout << "this is numeric character";
    }
}