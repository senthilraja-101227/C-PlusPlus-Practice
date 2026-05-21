#include<bits/stdc++.h>
using namespace std;
/*Recursion
A recursive function is a function that calls itself to solve a smaller version of the same problem

Recursion has 2 parts:
1. Base Case-Stopping condition-->if(n==1)
Without this, infinite calls happen.

2. Smaller Problem-->fact(n-1)-->Each call reduces problem size.

//factorial

int fact(int n){
if(n==0){
    return 1;
}
else{
    return n * fact(n-1);//calls itself
}
}
int main(){
int n;
cin>>n;
cout<<fact(n)<<" ";
}
*/

//fibonacci

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}


int main(){
int n;
cin>>n;
cout<<fibo(n);
}
