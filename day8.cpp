#include<iostream>
using namespace std;
int main(){
    //copy the positive element in input arr to another arr and print it
int n;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
int arr2[n];
int j=0;
for(int i=0;i<n;i++){
    if(arr1[i]>0){
        arr2[j]=arr1[i];
        j++;
    }
}
for(int i=0;i<j;i++){
    cout<<arr2[i]<<" ";// if i give i< size it shows garbage value if the value of i is less than the j value so i used i <j which new copied array
}
//printing the same but without copying to another array
int num;
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
    cin>>arr[i];
}
for(int i=0;i<num;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
                    }
}


//goto
//print  1 to n without loops
int n1;
cin>>n1;
int i=1;
start:
cout<<i<<" ";
i++;
if(i<=n1){
goto start;
}

// it is not recommended
//it is only used when to come out of nested loop but some other solutions also available for this problem
//goto Makes code hard to read,it Creates spaghetti code




}
