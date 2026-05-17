#include<iostream>
using namespace std;
int main(){
 //sorting
/* int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;// instead these three lines use swap(arr[i],arr[j]);
        }
    }
 }
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
*/

 // I am not going depth into sorting alogorithms just found one difference between sorting and selection sorting
 //selection sorting find the min element in a array and after that it swap it but in normal sorting we compare one by one if satisfies we swap there may be multiple swap
  int n1;
  cin>>n1;
  int arr[n1];
  for(int i=0;i<n1;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n1-1;i++){
        int minIndex=i;
    for(int j=i+1;j<n1;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
  swap(arr[i],arr[minIndex]);
  }
  for(int i=0;i<n1;i++){
    cout<<arr[i]<<" ";
  }
}
