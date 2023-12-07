#include <iostream>
using namespace std ;

int main()
{
/*

1.Arithmetic Operators///////////////////////////////////////////////////////////////////////////////////////////////////////

Operator	Operation
 ________    _________

i.   +	        Addition
ii.  -	        Subtraction
iii. *	        Multiplication
iv.  /     	    Division
v.   %	        Modulo Operation (Remainder after division)
vi. ++a          eancreases the value by 1(pre eancreament)
vii. --b         decreases the value by 1 (pre   deacreament)
viii. aa++
ix.   bb--




*/
int a, b , pe , de ;
    a = 7;
    b = 2;
    pe = 3;
    de = 4;
    cout << "value of integers - a = 7, b = 2,pe = 3, de = 4 " << "\n" ;
    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;
  
   // printing the modulo of a 
    cout << "a(7) ++a  = " << (  ++a  ) << endl;
   
   // printing the modulo of  b
    cout << "b(2) --b  = " << (  --b  ) << endl;
  
  // printing the modulo of pe(4)
    cout << "pe(3) pe ++  = " << (  pe++ ) << endl;
 
 // printing the modulo of  de(3)
    cout << " pd (4) pd -- = " << ( de-- ) << endl;

//2.Assignment Operators
/*in other file......................................................................... */

//3.Relational Operators
/*in other file......................................................................... */

//4.Logical Operators
/*in other file......................................................................... */
//5.Bitwise Operators

//6.Other Operators
  
    return 0;
}
