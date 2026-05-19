#include<iostream>
using namespace std;

 //types of functions-->library or inbuilt fn ,user defined fn
 //functions may be -->fn with arg and return type ,fn without arg with return type,fn with arg and without return type,fn without arg and without return type

 //fn without arg and without return type

 /*void drawline(){
 for(int i=1;i<=40;i++)
 cout<<"_";
 }
 int main(){
 drawline();
 }*/

 // fn with arg and return type

/*int findMax(int x,int y){
if(x>y){
    return x;
}
else{
    return y;
}//also write it as return(x>y) ? x : y;
}
int main(){
int a,b;
cin>>a>>b;
cout<<findMax(a,b);
}
*/
//fn with arg and np return type
void checkEvenOdd(int n){
if(n%2==0){
    cout<<"Even";
}
else{
   cout<<"Odd";
}
}
int main(){
    int n;
    cin>>n;
checkEvenOdd(n);
}

//without arg and with return

/*int getValue(){
int x=100;
return x; // also write it as return 100;
}
int main(){
cout<<getValue();

}*/

// In all code i used main function below so i dont declare that function i simply use it but now i use main function first so there is an err like greet was not declared
//no return type,no argument
/*void greet();//function declaration
int main(){
greet();
}
void greet(){
cout<<"WELCOME";//function definition
}*/


//Now here i understood about Scope,Global,Local Variable,Pass by value,pass by reference

/*
Scope
The area/block where a variable can be accessed or used
Usually { } creates a new scope,outside the scope the var is not able to be accessed

Local Variable
A variable declared inside a function or block is called a local variable.
It can be used only inside that function/block.

Global Variable
A variable declared outside all functions is called a global variable.
It can be accessed anywhere in the program.

Pass by Value
When a function receives a copy of a variable value, it is called pass by value.
Original variable does NOT change.

Pass by Reference
When a function receives the original variable itself using &, it is called pass by reference.
Original variable changes.
*/


