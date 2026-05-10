#include<bits/stdc++.h>
using namespace std;
int main(){

//Array

// int arr[10]; size should be given not declare like this->int size=10;int a[size]; it shows error
//but we can use #define SIZE 20-->main(){ int a[SIZE]; } we can use this which is symbolic constant

//Array Initialization
int a[5]={1,2,3,4,5};
cout<<a[0]<<endl;//1 subscript


//2D Array
int marks[100][5];//2 subscript 0th student 5 marks .....99th student 5 marks
//we created 100 1 dimensional array each size is 5

//To initialize
int arr[3][4]={{1,2,3,4},{5,6,7,8},{2,2,4,5}};
cout<<arr[0][2]<<" "<<arr[2][0]<<endl;

//3D Array
int three_arr[2][3][4]={{{11,2,3,4},{5,6,7,18},{2,2,4,5}},{{1,2,3,4},{5,6,7,8},{2,2,4,5}}}; //3 subscript -->2 2d array with 3 1d array with 4 elements
cout<<three_arr[0][1][3]<<endl;



//Loops
//Set of instructions repeats until specified condition is true

//while(entry control),do while(exit control),for

//for loop
/*for(int i=0;i<=500;i++){
    cout<<*<<" ";
}

//while loop
int i=0;
while(i<=500){
    cout<<i<<" ";
    i++;//if i miss this,then it will become infinite loop
}*/

//do while
int i=0;
int n;
cout<<"Enter a input value: ";
cin>>n;
do{
    cout<<i<<" ";
    i++;
}while(i<n);

}
