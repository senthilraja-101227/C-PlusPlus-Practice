//Revision ->>day 6

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 string s;
 getline(cin,s);
// reverse(s.begin(),s.end());
 //cout<<s;
 for(int i=s.length()-1;i>=0;i--){
    cout<<s[i];
 }
}
