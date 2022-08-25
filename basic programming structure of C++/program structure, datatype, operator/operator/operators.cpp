#include <iostream>
using namespace std;

int main()
{
   //#### Operators in c and it's uses

   // #Arithmetic operators in c++
   // followings are arithmetic operators in c++ :
   // + - * / %

   // uses
   cout << "Airthmetic Operators\n\n";
   int a, b, sum, sub, mul, div, mod;
   a = 1;
   b = 2;

   // addition
   sum = a + b;
   cout << "the sum of " << a << " + " << b << " is = " << sum << endl;

   // subtraction
   sub = a - b;
   cout << "the subtraction  of " << a << " - " << b << " is = " << sub << endl;

   // multiplication
   mul = a * b;
   ;
   cout << "the multiplication of " << a << " * " << b << " is = " << mul << endl;

   // division
   div = a / b;
   cout << "the division of " << a << " /  " << b << " is = " << div << endl;

   // modulus
   mod = a % b;
   cout << "the modulus of " << a << " % " << b << " is = " << mod << endl;

   // #Relational operators
   // ==, <, >, <=, >=, !=

   // uses
   cout << "\n\nRelational Operators\n\n";
   int c = 5;
   int d = 10;
   bool first, second, third, forth, fifth, sixth, seventh;

   // == equal to

   first = c == d;
   cout << "comparisonn using equal to operator : " << c << " is == " << d << " : " << first << endl;
   second = c < d;
   cout << "comparison using less than operator : " << c << " is < " << d << " : " << second << endl;
   third = c > d;
   cout << "comparison using grater than operator : " << c << " is > " << d << " : " << third << endl;
   forth = c <= d;
   cout << "comparison using less than equal to operator : " << c << " is <= " << d << " : " << forth << endl;
   fifth = c >= d;
   cout << "comparison using grater than equal to operator : " << c << " is >= " << d << " : " << fifth << endl;
   sixth = c != d;
   cout << "comparison using not equal to operator : " << c << " is != " << d << " : " << sixth << endl;

   // #logical operator
   // && || !

   cout << "\n\nlogical operators\n\n";
   int e = 10;
   int f = 10;

   // uses
   cout << "operation using && : " << (e == 10 && f == 10) << endl;
   cout << "operation using || : " << (e == 10 || f == 5) << endl;
   cout << "operation using ! : " << (!e) << endl;

   // #Bitwise Operator
   /*
       And -> &
       OR -> |
       NOT -> ~
       XOR -> ^

       1. And -> a=2, b=3
                 a&b - > 2 -> 1 0
                         3 -> 1 1
                              ---
                              1 0 -> 2

       x y | z
      ----------
       0 0 | 0
       0 1 | 0
       1 0 | 0
       1 1 | 1

       a = 5 - > 1 0 1
       b = 7 - > 1 1 1
                --------
                 1 0 1    ---> 5

       OR -> |

       x  y | z
       ---------
       0  0 | 0
       0  1 | 1
       1  0 | 1
       1  1 | 1

       a =2
       b =4
                1 0
              1 0 0
              ------
              1 1 0  ---> 6

       a = 3
       b = 6

                1 1
              1 0 0
              -----
              1 1 1  --> 7


       3.NOT -> ~

       a = 2
       00000.0010

       ~a  (first one means negative number)
       ~a = 111111111....1101
           is 00000000000010 (one's compliment)
                          +1
           2's 000000000000011

           ~a = -3;

       4.XOR -> ^

       x y | z
       0 0 | 0
       0 1 | 1
       1 0 | 1
       1 1 | 0

                   a = 2 -> 010
                   b = 4 -> 100
                           -----
                   a^b      110

                   a =5 -> 101
                   b =7 -> 111
                          -----
                           010

       4.LEFT SHIFT -> <<

       3 << 1
       = 0000000000...000101
       = 0000000000...001010
                       = 10

       3 << 2

       = 00000000.000011
       = 00000000.001100
                    =12

       //in case of bigger number left shift operator makes it negative number

       ex ;
               0100........0010
                             <<1
               1000........0100
               //hare first one is represent negative numbers

       5.RIGHT SHIFT

       15 >> 1

       5 >> 2
       00000....00101  = 5/2  = 2/2 = 1
       00000....00001
                   =1

   // In case of <<,>> +ve number padding with 0
   // In case of <<,>> -ve number padding is dependent on compiler


   */

   cout << "\n\noperation using bitwise operators : \n\n";

   int x = 4;
   int y = 6;

   cout << " A&B " << (x & y) << endl;

   /*
       4 = 100
          &
       6 = 110
       --------
           100 = 4

   */

   cout << " A|b " << (x | y) << endl;

   /*
       4 = 100
          |
       6 = 110
       --------
           110 = 6

   */

   cout << " ~A " << (~x) << endl;

   /*
    4 = 100
       ~
    --------
        000000...000100
        111111...111011 = -
               =
        1's compliment = 000000...000100
                                      +1
        2's compliment = 000000...000101 = 5

        == -5
*/

   cout << " A^B " << (x ^ y) << endl;

   /*
       4 = 100
          ^
       6 = 110
       --------
           010 = 6

   */

   cout << "Right shift operation : " << (17 >> 1) << endl;

   /*
   17<<2 =
   0000000000000000...1000
   = 8
   */

   cout << "Right shift operation : " << (17 >> 2) << endl;

   /*

   17>>2 =
   000000000000...100
   = 4

   */

   cout << "Left shift operation : " << (19 << 1) << endl;

   /*

   19<<1 =
   00000000000...100110
   = 38

   */

   cout << "Left shift operation : " << (21 << 2) << endl;

   /*

   21<<2 =
   00000000000...1010100
   = 42

   */

   // #increment / Decrement operators

int i = 1;

cout << "\n\nincrement / Decrement operators \n" << endl;

   /*

   i++; post increment
      // post increment use first then increase
*/


   cout << "post increase i : "<< i++ << endl;
   // i =  2

   /*

   ++i; pre increment
      // pre increment increase first then use

   */

   cout << "pre increase i : "<< ++i << endl;
   // i = 3

   /*
    i--; post decrement
       // post decrement use first then decrease
   */


   cout << "post decrease i : "<< i-- << endl;
   // i = 2

   /*
    --i; pre decrement
        // pre decrement decrease first then use

    */

   cout << "pre decrease i : "<< --i << endl;
   // i = 1
   

}