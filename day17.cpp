/*Revised Day 1 to Day 5

Day 17 Challenge: The Interactive Array Analyzer
Objective:
Write a C++ program that acts as a multi-functional tool to analyze a list of numbers.
Program Requirements:
Initial Input:
Ask the user to input a positive integer N (the size of the array).
Take N integer inputs from the user and store them in an array.
The Interactive Menu:
Use a do-while loop to repeatedly display a menu of operations until the user chooses to quit.
Prompt the user to enter a single character (char) to select an option.
Menu Operations (Use a switch statement to handle these):
Case 'M' (Min/Max): Find and print the maximum and minimum elements in the array.
Case 'E' (Even/Odd Count): Count and print the total number of even numbers and odd numbers in the array using the modulo operator.
Case 'R' (Reverse): Print the elements of the array in reverse order.
Case 'S' (Sum): Calculate and print the sum of all the elements in the array.
Case 'Q' (Quit): Exit the do-while loop and terminate the program with a successful return state.
Default: If the user enters any other character, print "Invalid Input. Please try again."
Bonus Constraints for Extra Polish:
Ensure your switch statement can handle both lowercase and uppercase inputs (e.g., both 'm' and 'M' should trigger the Min/Max logic, just like your vowel-checking logic).
Use escape sequences like \n or \t to format the menu cleanly in the console*/

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxi,Evencount,Oddcount,sum;
char ch;
do{
        cout << "M: Max element\nE: Even/Odd count\nR: Reverse\nS: Sum\nQ: Quit\n";
        cout<<"Enter your choice";
        cin>>ch;
    switch(ch){
case 'M':
case 'm':
    maxi=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        cout<<maxi<<"\n";
        break;
case 'E':
case 'e':
Oddcount=0;
Evencount=0;
for(int i=0;i<n;i++){

    if(arr[i]%2==0){
        Evencount++;
    }
    else{
        Oddcount++;
    }
}
cout<<Evencount<<" "<<Oddcount<<"\n";
break;
case 'R':
case'r':

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    break;
case 'S':
case 's':
     sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<" \n";
    break;
default:
    cout<<"Invalid input.Please try again\n";
}
}while(ch!='Q' && ch!='q');
}
