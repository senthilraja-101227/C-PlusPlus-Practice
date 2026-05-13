#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxi=arr[0];
int mini=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    if(arr[i]<mini){
        mini=arr[i];
    }
}
cout<<maxi<<endl;//finding max element in an array
cout<<mini<<endl;
//in Array we need tell the size at first so it created 10 space (ex : size=10) but i only used 5 size then rest of the space is wasted so for that
//we use dynamic memory allocation


//Reverse a number in array
int num,count_number=0;
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
    cin>>arr[i];
}
//int rev=0;
for(int i=num-1;i>=0;i--){
   cout<<arr[i]<<" ";

//cout<<rev<<" ";
count_number++;
}

cout<<endl;
cout<<count_number<<endl;//count an number


//Print numbers upto N
int N;
cin>>N;
for(int i=0;i<N;i++){
    cout<<i<<" ";
}
cout <<endl;
// sum of first N numbers
int sum=0;
 for(int i=1;i<=N;i++){
    sum += i;
 }
 cout<<sum<<endl;


 //factorial of N
 int product=1;
 for(int i=1;i<=N;i++){
    product *= i;
 }
 cout<<product<<endl;

 //reverse a string
 int count_string=0;
 string name="hello";
 string reversed_string="";
 for(int i=name.length()-1;i>=0;i--){
    reversed_string+=name[i];
    count_string++;
 }
 cout<<reversed_string<<" "<<count_string;

//reversing a number

 int number;
 cin>>number;
int rev_number=0,count_of_number=0;

while(number>0){
    int rem=number%10;
    rev_number=rev_number*10+rem;
    number=number/10;
    count_of_number++;
 }
 cout<<rev_number<<endl<<count_of_number<<endl;


 //factor of number

 int n1;
 cin>>n1;
 int factor=0;
 for(int i=1;i<=n1;i++){
    if(n1%i==0){
       factor=i;

 cout<<factor<<endl;
 }
 }

}
