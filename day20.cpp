/*Reverse String
Palindrome
Largest / Second Largest
Even-Odd Count
Sum & Average of Array
Linear Search
Binary Search
Prime Number
Fibonacci Series
Character Frequency*/

/*
//Reverse
#include<iostream>
#include<string>
using namespace std;
int main(){
string s1;
cin>>s1;
for(int i=s1.length()-1;i>=0;i--){
    cout<<s1[i];
}
}

#include<iostream>
using namespace std;
int main(){
string s1;
cin>>s1;
int i=0;
int j=s1.length()-1;
while(i<j){
    if(s1[i]!=s1[j]){
        cout<<"Not Palindrome";
        return 0;
    }
    i++;
    j--;
}
cout<<"Palindrome";
}


#include<iostream>
#include<climits>// for predefined constant INT_MIN
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int largest=INT_MIN;
int secondlargest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]!=largest){
        secondlargest=arr[i];
    }
}
cout<<largest<<" "<<secondlargest;
}

#include<iostream>
using namespace std;
int main(){
string s1;
cin>>s1;
for(int i=0;i<s1.length();i++){
    int countno =1;
    if(s1[i]=='*'){
        continue;
    }
    for(int j=i+1;j<s1.length();j++){
        if(s1[i]==s1[j]){
            countno++;
            s1[j]='*';//here i give as s[j] == '*' before and print some more values as a count ??

        }
    }
    cout<<s1[i]<<" = "<<countno<<endl;

}

}

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n==1){
    cout<<0;
    return 0;
}
int f0=0;
int f1=1;
cout<<f0<<" "<<f1<<" ";
for(int i=2;i<n;i++){
    int next=f0+f1;
    f0=f1;
    f1=next;

cout<<next<<" ";
}
}


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int evencount=0,oddcount=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        evencount++;
    }
    else{
        oddcount++;
    }
}cout<<oddcount<<" "<<evencount;
}

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum=0;
float avg=0;
for(int i=0;i<n;i++){
    sum+=arr[i];

}
avg=(float)sum/n;
cout<<sum<<" "<<avg;
}


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
bool found=false;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        found=true;
        break;
    }
}
if(found){
    cout<<"Found";
}
else{
cout<<"Not Found";
}
}

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n<=1){
cout<<"Not Prime";
return 0;
}
bool isprime=true;
for(int i=2;i<n;i++){
    if(n%i==0){
        isprime=false;
        break;
    }
}
if(isprime){
    cout<<"Prime";
}
else{
cout<<"Not Prime";
}
}


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low=0;
int high=n-1;
bool found=false;
int key;
cin>>key;
while(low<high){
    int mid=(low+high)/2;
    if(arr[mid]==key){
        found=true;
        break;
    }
    else if(arr[mid]>key){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
if(found){
    cout<<"Found";
}
else{
    cout<<"Not found";
}
}

//Remove duplicates from array
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
        bool duplicate=false;
    for(int j=0;j<i;j++){

    if(arr[i]==arr[j]){
        duplicate=true;
    break;
    }
    }

if(!duplicate)
{
cout<<arr[i]<<" ";
}
}
}
//count digit
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n==0){
    cout<<1;
    return 0;
}
int countno=0;
while(n>0){
    int rem=n%10;
    countno++;
    n=n/10;

}
cout<<countno;
}
*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int factorial=1;
for(int i=1;i<=n;i++){
    factorial*=i;
}
cout<<factorial;
}
