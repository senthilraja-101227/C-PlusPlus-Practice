//Revision ->>day 6 and day 7
//Continue with day 8,9 and 10
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    /*
 string s;
 getline(cin,s);
// reverse(s.begin(),s.end());
 //cout<<s;
 for(int i=s.length()-1;i>=0;i--){
    cout<<s[i];
 }


 //this was the sum i solved in day 6 but now i get the doubt what if the input is "hello world " so here the word is 2 but iam counting the space
 //and starts with 1 so the output gives 3 instead of 2 so i  tried new solution for this
 //count no. of words in string
string s;
getline(cin,s);
int count_word=1;
for(int i=0;i<s.lengt
    h();i++){
    if(s[i]==' '){
       count_word++;
    }
}
cout<<count_word;

string s1;
getline(cin,s1);
int count_words=0;
for(int i=0;i<s1.length();i++){
    if(s1[i]!=' ' && (i==0 || s1[i-1]==' ')){
       count_words++;
       }
}
cout<<count_words;

*/

//finding second largest ele in a array


int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int largest=arr[0];
int secondlargest=-1;
for(int i=1;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]!=largest){
        secondlargest=arr[i];
    }
}
cout<<secondlargest;
}
