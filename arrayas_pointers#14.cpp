#include<iostream>
using namespace std;
int main(){
 int marks[4]{10,20,30,40,};
int mathmarks[5]{100,200,300,400,500}; 
int numbers[4]{101,202,303,404,};

cout<< marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

/////////////////////////////////////////////////////

cout <<"mathmarks........." <<endl;

cout<< mathmarks[0]<<endl;
cout<< mathmarks[1]<<endl;
cout<< mathmarks[2]<<endl;
cout<< mathmarks[3]<<endl;
cout<< mathmarks[4]<<endl;

/* this type of programing using loop"           */
cout<<"this type of programing using for loop" <<endl;

for ( int i = 0; i < 4 ; i++)
{

    cout <<"the value of marks'" <<i <<"'is-" <<numbers[i]  <<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*  this type of programing using  do & while  loop"           */
/*
cout<<"this type of programing using for do &  while loop" <<endl;

int numbers[4]{1012,2023,3034,4045,};

 */

/////pointers

int* p = marks;
cout<<"the value of marks[0] is-"<<*p; ///////////// p  stores the memory adress





return 0;
}

