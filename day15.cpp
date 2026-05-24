#include<iostream>
using namespace std;
//PRACTICE PROBLEM ON RECURSION
//sum of digits ex:1234 then 1+2+3+4 =10->output
/*
int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    int last;
    last=n%10;
    return last+sumofdigits(n/10);
 }
int main(){
int n;
cin>>n;
cout<<sumofdigits(n);
}


//powerofn

int power(int b,int p){
if(p==0)
    {
        return 1;
    }

    return b * power(b,p-1);


}
int main(){
int b,p;
cin>>b>>p;
cout<<power(b,p);

}*/

//reversenumber
void reverse_number(int n){
 if(n==0){
    return;
 }
 cout<<n%10;
   reverse_number(n/10);

}
int main(){
int n;
cin>>n;
reverse_number(n);
}
