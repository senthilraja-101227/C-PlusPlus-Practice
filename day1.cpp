//in c it is a procedural language
//if i make one change in a funtion everything gets collapsed so they introduced c++ object oriented
//program--set of intructions
#include <iostream>//iostream file -->ostream cls --> cout->object
#include <iomanip>
using namespace std;//using directive,using declaration-->using std::cout declare only one specifically,or scope resolution std::cout

int main()//function-->beginning point ,it should int not void because atlast we use return 0 (it tells an os that program executed succcesfully)
//its an integer even if we dont give return 0 in default it take it as implicitly so for that int should be needed ,
//main should not be changed its an default name
{
 /* int a=6,b=8;
  cout<<--a<<"\n";
  cout<<b--<<"\n"; //if i give like cout<< and again<< twice the operator in the sense it is operator overloading
  a=6,b=8;
int c=--a + b--;
cout<<c<<"\n"<<a<<"\n"<<b<<"\n";*/ //increment and decrement operators
// post increment a++ frst assign then increment,
//pre increment ++a frst increment and then assign


//asssignment operators =,+=,-=./=,%=,*=(shorthand assignment)
//arithmetic operators(+.-.*,/,%)
//relational operators(>,<,<=,>=,==,!=)
//logical operators(&&,||,!) 0 or 1 is o/p
//bitwise operators(&,|,^-exor,~ one's complement,
                    //>>-right shift (not accurate mostly op-divide by 2) ,<<-left shift (op-mul by 2))

/*int a,b,c;
cin>>a>>b>>c;
if(a>=b && a>=c){
    cout<<"a is : "<<a;
}
else if(b>=a && b>=c){
    cout<<"b is : "<<b;
}
else{
    cout<<"c is : "<<c;
}*/
// > matum kudutha last ah iruka val like else print aguthu 5 6 6 c is 6 nu varum but b tha frst greater so if i need to print b then it should be >=


    //switch  float is not handled by switch
    //multi dimensional control statement
    /*int a,b;
    char op;
    cin>>a>>op>>b;
    switch(op)// we are able to give only int,ch --only int why ch included in the sense it is also stored as numbers (ascii) in memory
    {
 case '+':
    cout<<a+b;
    break;
 case '-':
     cout<<a-b;
     break;
 case '*':
    cout<<a*b;
    break;
 case '/':
    cout<<a/b;
    break;
 case '%':
    cout<<a%b;
    break;
 default:
    cout<<"Invalid input";
    } */

   /* char ch;
    cin>>ch;
    switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout<<"Vowel";
    break;
default:
    cout<<"Consonant";
    }*/


   /* double cel;
    cin>>cel;
    double fah =(cel*1.8)+32;
    cout<<cel<<" "<<fah;*/

 /*  int n;
   cin>>n;
   int arr[n];
   int evencount=0,oddcount=0;

   for(int i=0;i<n;i++){
        cin>>arr[i];
   }
   int mini=arr[0];
   int maxi=arr[0];

   for(int i=0;i<n;i++){
        if(arr[i]>maxi){
        maxi=arr[i];
        }
        if(arr[i]<mini){
        mini=arr[i];
    }

     if(arr[i] % 2 == 0){
            evencount++;
        }
        else{
            oddcount++;
        }
   }
   cout<<maxi<<"\n"<<mini<<"\n";
   cout<<evencount<<"\n"<<oddcount;
    return 0;
    */
   // bool n=-28;
    //cout<<n;// it return 1 for all integers except for 0,int ch='a' cout<<ch; it give the ascii value of that char








   // Literals

   int a=16;//decimal
   int b=020;//octal   16/8=2 rem 0 ,add 0 in front
   int c=0x10;//hexadecimal 16/16=1 rem 0,add 0 x in front,X may be capital or small
   cout<<a<<" "<<b<<" "<<c<<" ";

   //A literal is a constant value directly written in the source code, not a value provided at runtime through input.
   //Escape sequence is also an literal \n,\t,\v,\a-MAKE ALARM SOUND ,\b-BACKSPACE DELETE ONE LETTER,
   // carriage return -> \r-overwrites after this it starts again from the start.\f-moves to next new page
   cout<<"Hello\bWorld";



}//run kudutha processor execute panum but pannu nu solrathu os-->return EXIT_SUCCESS,return 0
