#include <iostream> 
using namespace std; 

int main(){

    // C data types and it sizes

    // integers
    int a  = 50;
    cout << a << endl;
    cout << "the size of interger is " << sizeof(a) << endl;

    // floats
    float b = 60.50;
    cout << b << endl;
    cout << "the size of float is " << sizeof(b) << endl;

    // doubles
    double c = 1.22225;
    cout << c << endl;     
    cout << "the size of double is " << sizeof(c) << endl; 

    // characters
    char d = 'd';
    cout << d << endl;
    cout << "the size of character is " << sizeof(d) << endl;

    // boolean
    bool e = true; // true = 1; false = 0;
    cout << e << endl;
    cout << "the size of boolean is " << sizeof(e) << endl;

    // unsigned int

    // the unsigned int is only store positive value

    unsigned int unsignedvar = 3;

    cout << "\nThe value of unsignedvar is : "  << unsignedvar << endl;

    // if we add negative values in usigned int so it convert value to according 
    // to 1's compliment and 2's compliment and the output value become any big positive 
    // big integer according to 1's and 2's compliment.

    // typecasting 

    int f = 'a';
    cout << "\n\nThe a ASCII value of a is " << f << endl << endl;
    
    char g = 97;

    cout << "The character on 97 value in ASCII table is " << g <<endl;
    
    // if value if very big so it give last number of value of give the character according to these value
    char h = 6464646464;

    cout << "The character on 97 value in ASCII table is " << h <<endl;
    
}