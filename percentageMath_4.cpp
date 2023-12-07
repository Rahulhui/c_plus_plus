#include<iostream>

using namespace std ;
int main ()
{
int val , total_val,c = 100;
cout<< "enter the total price of a product -" ;
cin >>  total_val ;
cout << "enter the bying cost of a product  - " ;
cin >> val ;
c = val*c / total_val ;////////////??????????????/////////////
 cout <<"price off in the product  " << c << " % " ;

return 0;
}