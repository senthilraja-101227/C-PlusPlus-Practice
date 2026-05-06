#include <iostream>
#include<iomanip>//like if we use setprecision we need to declare this
#include<cmath>//if we use sqrt->then include this header file
using namespace std;
int main()
{

/* primary,derived,user defined datatypes
derived-->function,array,pointer,reference
user defined--> class,structure,union,enum,typedef
primary->int,char,bool,float,doublefloat,void,wide ch*/


//default->signed int ->first bit for sign rest of the bit for numbers,,unsigned -->every bit used to store numbers
// bool doesnt have signed ,unsigned but char has because it is stores as ascii value in memory(here depends on compiler it takes as signed or unsigned as default)

//type conversion-->implicit->in background it done automatically ,explicit-done by the user


int tc1,tc2;
float tc3;
tc1=5,tc2=2;
tc3=(float)tc1/tc2;//explicit
cout<<tc3<<endl;

int in1,in2;
in1=5;
in2=++in1;//op-> 6 6
//in2=in1++;//op->6 5
cout<<in1<<" "<<in2<<endl;

  int a=6,b=8;
int c=--a + b--;//5+8
cout<<c<<"\n"<<a<<"\n"<<b<<"\n";//5 and 7 stored as 7 after b-- but at first it uses 8 only then it prints 7
//flow chart-> if 2 variables have different data type like int a,float b then both are converted to float and proceed to next step
//char,short int to int to float to double to long double-->hierarchy
}
