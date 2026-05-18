#include<bits/stdc++.h>
using namespace std;
int main(){

/*    It was the problem that i already solved in previous day but now i get some doubts in the same question so i came here again and cleared itt...!!

    In C++, a bool variable stores either true (1) or false (0). When we write a condition like if(isPrime), the program does not check the initial value we declared —
    -->it always checks the latest updated value of that variable at that moment.
The if statement does not print or display the value (0 or 1). Instead, it decides whether to execute the block or not:

If the value is 1 (true), the condition becomes if(1), which is true, so the block runs.
If the value is 0 (false), the condition becomes if(0), which is false, so the block is skipped.

So, if(isPrime) simply means:
“Check if isPrime is true right now.”*/

   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int key;
   cin>>key;
   bool found=0;
    int index;
   for(int i=0;i<n;i++){
    if(arr[i]==key){
            index=i;
            found=1;
            break;
    }
   }
   if(found){
    cout<<index;
   }
   else{
    cout<<"-1";
   }


   //printing pattern like right angle triangle
   int size_of_n;
   cin>>size_of_n;
   for(int i=1;i<=size_of_n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }



   //functions-->subprogram to do some specific tasks

int add(int x,int y)//function header includes o/p of function return type,function name,input for function which is argument or parameters
{//called fn
   int z;
   z=x+y;
   return z;
}//function body

int main()
{
     int a,b,c;
     cin>>a>>b;
     c=add(a,b);//fn call
     cout<<c;

}
