#include<iostream>
using namespace std;

//types of variables-local,global,static
 /*local->variables inside one block ->only used inside that block//space allocated in stack segment
 global->used by every function,int g; if i initialize without any value it has default value 0//space allocated in data segment
 static ->A static variable is a variable that is initialized only once and
 retains its value throughout the entire program execution, even after the function in which it is declared ends.

 Remember previous state
 Game score, login attempts, etc.

 lifetime = how long the variable exists in memory
 */

void func(){
int x=0;
x++;
cout<<x<<endl;
}
int main(){
func();
func();
func();
}
/*
void func(){
static int x=0;
x++;
cout<<x<<endl;
}
int main(){
func();
func();
func();
}*/
