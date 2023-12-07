#include<iostream>
using namespace std;
//////////////////stucture
typedef struct employee

{
  int eid;
  char favchar;
  float salary;  
} ep ;

int main(){
ep ranjan ;
ranjan.eid = 1  ;
ranjan.favchar =  'r';
ranjan.salary = 3500000;
cout<<"using typedef-" <<endl ;
cout<<"ranjan,s value of e id -"<<ranjan.eid <<endl <<"the value of favchar -" <<ranjan.favchar <<endl<<"the value of salary-" <<ranjan.salary <<endl;
//////////////////////////////////////////



return 0;
}
