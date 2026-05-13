#include<iostream>
#include<cmath>
using namespace std;
int main(){
/*
    //biggest square number less than N
  int num;
   cin>>num;
   while(num>0){
    num--;
    int root=sqrt(num);

    if(root*root==num){
        break;
    }
   }
  cout<<num<<endl;

  //find the index of element in arr output should be -1 if not found
  int n=5;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bool found=0;
  int index=0;
  int key;
  cin>>key;
  for(int i=0;i<n;i++){
    if(arr[i]==key){
        found=1;
        index=i;
        break;
    }
  }
  if(found){
    cout<<index;
  }
  else{
    cout<<"-1";
  }


  //to print all numbers less than 100 except 15
  int number=15;
  for(int i=0;i<100;i++){
    if(i==number){
        continue;
    }
    cout<<i<<" ";
  }*/

  int a[5]={2,-4,1,3,-7};
  int b[5];
  for(int i=0;i<5;i++){
    if(a[i]>0){
     b[i]=a[i];
    }

    else{
        continue;
    }
  }
    cout<<b[i];

}
