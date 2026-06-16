//Armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;

int copyn=n;
int countno=0;
int sum=0;
while(copyn>0){
    countno++;
    copyn/=10;
}
copyn=n;
while(copyn>0){
   int rem=copyn54%10;
    sum+=pow(rem,countno);
    copyn=copyn/10;
}
if(sum==n){
    cout<<"Armstrong Number";
}
else{
    cout<<"Not a Armstrong";
}
}
