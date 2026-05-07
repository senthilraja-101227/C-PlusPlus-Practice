#include<bits/stdc++.h>
using namespace std;
int main(){
   //bitwise operator->o/p may be any number

   cout<<(3 & 2)<<endl;//o/p 2 0010-2 0011 -3 op->0010 if both 1 then 1 same for or operation (3|2)
   cout<<(3 | 2)<<endl;
   //  << left shift operator(12<<1) binary of 12 left shit by 1 0000 1100->12 left shift 0001 1000 becomes 24 mostly for left shift it is multiplied by 2 and
   //for right shift(>>) it is divided by 2 but not 100%

   //(8>>1)syntax:var>>no. of bit  positions
   //last one is complement(~)

  // logical operator(o/p) is always 0 or 1


  int n1,n2,n3;
  cin>>n1>>n2>>n3;
  int max=0;
  if(n1>n2){
    if(n1>n3){
        max=n1;
    }
    else{
        max=n3;
    }
  }
  else{
    if(n2>n3){
        max=n2;
    }
    else{
        max=n3;
    }
  }
  cout<<max<<endl;// here no need of >=  because in else condition it checks all even if the input is like 5 5 3

  /*if(a>=b && a>= c){
    cout<<a
}
else if(b>=a && b>=c){
    cout<<b;
}
else{
    cout<<c;
}//but for these we need >= becuase if one become false it doesnt check another so it may get false solutions so it may go to else condtion and print 3 instead of 5 (5 5 3)

*/

char ch;
cin>>ch;
switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout<<"Vowel";
    break;
default:
    cout<<"Consonants";
    }

}
