#include<bits/stdc++.h>
using namespace std;
int main(){

  //fibonacci series
    int n;
    cin>>n;
int f0=0,f1=1;
cout<<f0<<" "<<f1<<" ";

for(int i=2;i<n;i++){
   int next=f0+f1;
    f0=f1;
    f1=next;

cout<<next<<" ";
}

//count no. of words in string
string s;
getline(cin,s);
int count_word=1;
for(int i=0;i<s.length();i++){
    if(s[i]==' '){
       count_word++;
    }
}
cout<<count_word;


//decimal to binary

int decimalnum;
cin>>decimalnum;
string rev="";
while(decimalnum>0){
    char rem=decimalnum%2;
    decimalnum/=2;
    rev+= to_string(rem);
}
for(int i=rev.length()-1;i>=0;i--){
    cout<<rev[i]<<" ";
}


int num;
cin>>num;
bool isPrime=true;
for(int i=2;i<num-1;i++){
    if(num%i==0){
        isPrime=false;
        break;
            }
}
if(isPrime==true){
    cout<<"Prime";
}
else{
    cout<<"Not Prime";
}

}
