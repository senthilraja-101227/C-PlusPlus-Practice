#include<iostream>
using namespace std;
int main(){
    //Pointers
/*
int a=5;
int *p=&a;//address of a so to store that we use a pointer variable *p -->*indirection operator
cout<<p<<endl;//if we need to print the same value in a then we print *p or if we need address print p

char ch='h';
cout<<ch<<"\n";
char *cp=&ch;
cout<<cp<<"\n";
cout<<&ch<<"\n";
cout<<*cp<<"\n";*/

/*
//Pointer to a pointer
int a=20;
int *p;
int **p2;//dual pointer
p=&a;
p2=&p;
*/

//Pointer Arithmetic
int a;
int *p=&a;
p=p+1; // p is an integer pointer variable then 1000+1(4)=1004 so it doesnt point a now it may be some other variable which has 1004 address
//we can give either p++ or p-- too
p=p+5 //then 1004+5 integer(4)=1004+20=1024

char c;
char *cp=&c;//size=1000+adds only 1 beacuse it is character variable ->2001
cp=cp-5;//2001-5=1996
}


/*
//operations by pointer_safety

1.Addition of integer or increment
2.Subtraction of integer or decrement
3.Subtraction of one pointer from another pointer(same type->int-int or char-char)//No addition possible
