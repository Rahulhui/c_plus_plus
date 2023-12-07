#include<iostream>
using namespace std;
//////////////////stucture
struct employee
{
  int eid;
  char favchar;
  float salary;  
};

int main(){
struct employee rahul;
rahul.eid = 1;
rahul.favchar =  'r';
rahul.salary = 3500000;
cout<<"the value of e id -"<<rahul.eid <<endl <<"the value of favchar -" <<rahul.favchar <<endl<<"the value of salary-" <<rahul.salary <<endl;
//////////////////////////////////////////


return 0;
}