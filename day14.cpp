#include<iostream>
using namespace std;

/*Monthly Investment Growth Predictor
Problem Statement:
A fintech company tracks customer investment growth using a predictive expansion model.
According to the company’s financial forecasting policy:
Month 0 starts with 0 growth units
Month 1 starts with 1 growth unit
Every following month’s growth is calculated as the sum of the previous two months’ growth values*/
/*
int fibonacci(int n){
if(n==0){
    return 0;
}
if(n==1){
    return 1;//these 2 are the base case which stops recursion
}
    return fibonacci(n-1)+fibonacci(n-2);//recursive case
}

int main(){
int n;
cin>>n;
cout<<fibonacci(n);
}

//this was an backtracking problem i chose this to understand recursion only but feels little difficult to understand about backtracking,
//we'll crack that later now let's focus more on recursion alone


void brackets(string s,int open,int close,int n){
if(s.length()==2*n){
    cout<<s<<endl;
    return;
}
if(open<n){
    brackets(s+"(",open+1,close,n);
}
if(close<open){
    brackets(s+")",open,close+1,n);
}
}
int main(){
int n;
cin>>n;
brackets("",0,0,n);
}


//Print N to 1
void printn_to_one(int n){
if(n==0)
{
    return;
}
   cout<<n<<" ";
   printn_to_one(n-1);
   }
int main(){
int n;
cin>>n;
printn_to_one(n);
}
*/

//print 1 to N
void printone_to_n(int n){
if(n==0){
    return;
}
  printone_to_n(n-1);
 cout<<n<<" ";
}
int main(){
int n;
cin>>n;
printone_to_n(n);
}
