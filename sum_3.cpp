#include <iostream>
using namespace std;

int main() {
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout <<"additon \n ";
  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number ;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sum <<"\n" ;     
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int fnum,snum,equal ;
cout << "multiplication \n " ;
cout<<"enter the first value (f)  & second value(s) \n";
cin >> fnum >>snum;
equal = fnum * snum ;
cout <<  fnum <<"*" <<snum <<"=" << equal <<"\n"; 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout <<"substraction \n ";
cout<<"enter the first value (f)  & second value(s) \n";
cin >>fnum >>snum;
equal = fnum - snum ;
cout <<  fnum <<"-" <<snum <<"=" << equal <<"\n"; 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout <<"divison \n ";
cout<<"enter the first value (f)  & second value(s) \n";
cin >>fnum >>snum;
equal = fnum / snum ;
cout <<  fnum <<"/" <<snum <<"=" << equal; 

cout <<"END"; 

  return 0;
}