#include <iostream>
#include <cmath>// pow(a,b)= a^b  log10(x)
using namespace std;

void fun()
{
    cout<< "hi welcome to new u";
}
// now here will be list of functions which will be called in int function
void print_details(int id , string name = "NA" /*this means storing the default arguments suppose in int function the value of name is not provided the default value NA will be printed u can choose*/ , string adress ="NA"){
                        // if string name's default argument is stored toh uske agge wali details ka bhi krna padega otherwise error
cout << "id is" << id << "\n" << "name is" <<name << "\n"<< "adress is" << adress;
}
int main(){
// if else syntax
cout << "enter age";
int age;
//cin>> age;
if(age>100){
    cout<<"error , please enter a valid age"; 
}
   else{
    cout<< "please continue";
   }
/*if(){}    
elseif(){} :: this will only be checked if the first if statement is false
else(){}*/ 
 /*NESTED LOOPS
 if(){if(){}
 else{}
    
 }
 else{}*/

 int x=2 ,y=99;//SWITCH IN C++
 cout<< "\n"<<"enter the move";
 char move;
 //cin>> move;//while using switch statements be careful that the control mst be giving integer output
 switch(move)
 {
case 'l': x++;// these l f p r used must e constants
//break; //it is used to break this statement here only otherwise u wont get your desired o/p as it executes the cases written below it
case 'f': x--;
//break;
case 'p': y++;// if i cin is p it directly jumps to p case and if doesn't find if statement prints or executes r too and
//break;
case 'r': y--;
//break;
          
 }
 //cout << x << "  " <<y;
// functions in c++

cout<<"\n"; fun();
/*#include <iostream>
using namespace std;
int anoop(int a,int b){      -----  u may also write anoop() and declaring int a,b in a global scope but doing this is fine it saves space and this is not needed to represent globally so declare inside the function
      if(a>b){              ----- forming a function that is of returns integer
            return a;
      }
      else {
            return b;
      }

}
int main(){
      int a,b;
      cout <<"enter 2 nos";
      cin>> a >> b;
cout << anoop(a,b);         --------   calling that function anoop(a,b) 
return 0;
}*/
   
// if u have no ouputs simple printing cout functions then only use void// U CAN CALL ONE FUNCTION INSIDE OTHER


// FUNCTION STACK = its a container which basically means last in first out AND the first function is always the main function

// declare a function first u may define it later like say int getMax(int a , int b) means tell its input parameter too at first
cout<<"\n" << "         DETAILS          " <<"\n";
print_details(123, "anoop" , "home");
/*print_details(){
    cin>> id;  ---------- this will throw me a compiler error cz i haven't specified id as a int in this scope i said it for a function only and this only a calling of function
}*/

print_details(124 , "Gupta");// if i do not call or write the address then default value gets printed
/*this writing of parameters inside brackets cz these parameters are not globally true tey are only needed inside that function*/
   
 // return(x>y)?x:y means if x>y then return x otherwise y  
 // INLINE FUNCTIONS(only does the optimization to your program if u have a small code then then calling a function making stack of it complexation is not required so keyword inline just avoid it by simply copying the function code to the main function)
 // inline getMax(int a, int b)...................

 // the character is stored as a numeral inside compiler known as ascii value
 char p = 'a';
 cout<< "\n" << "ascii value of " <<  p << " is " << int(p);
 //LOOPS
 /* for(initialization;condition;change-loop variable){
        these inside variables are not accessible outside
 }
 */

// { this is just a block of code u can make it anyways}
// while(condition){}

//BREAK STATEMENT  - to come out of the loop
// CONTINUE STATEMENT -- to continue the iteration of the loop and skip the loop statements for the specific conditions
cout << "\n" <<"\n" << "enter two nos"; //~~~~~~ program to print all nos fro 1 to 10 except multiples of 2
int i ,j, k;                                   // sp enter k= 10 and j=2
cin >> j >> k; 
for(i=1;i<=k;i++){
    if(i%j==0){  // NOT NECESSARY THAT CONDITION IS TO BE APPLIED ONLY ON i means that is initiated it can be any condition , u will get better understanding on seeing problems
        continue; // if i would have written break only 1 would hv been printed
    }
    else{
        cout<< i <<" ";
    }
}


    
   
   
   
   
   
   
    return 0;
}
