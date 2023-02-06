#include <iostream>
#include <typeinfo>
using namespace std;
/*auto keyword means that compiler will automatically see its data type. u don't need to mention it.
as in case of constants which are basically literals the integer value is assumed to be int and the decimal value is assumed to be double*/
int main(){// int main function means that it returns an integer even its value is 0 if we wrote specific instructions 0 means successful execution of program int main()-----------linked with return 0; u cant write void func with a return 0 f u do u have to provide a function inside first
{// int is the return type and main is the function
    auto x=19.5;
   cout << typeid(x).name();
   
}
/*const int is used to form a constant value of a variable*/
//STATIC VARIABLE = when static int is written inside a function and the function is called multiple times then same variable is used otherwise each time a function is called , a new local variable is created everytime for the same


/*scope=  at first innermost scope is checked and is not accessible outside wheras global variable declared initially can be accessed anywhere but the first priority is given to innermost scope
}*/
{
auto  x=5.78;
    cout << sizeof(x);// size of operator is used to check the size of operator
    cout << "ag" 
    <<"\n";
}
// type conversions
  float x=10.5;
  int y=x;
  bool z=x;//(only the value 0 gets false value all other gets true value)
  //they happen without any error ;; in case of boolean if we gave integer value if its non zero it is considered true and others as false
  cout<< y  << z << "\n";
// explicit type conversion = when we want for a conversion to happen
int k=7 ,m=8;
cout<< float(k)/m <<"\n"; // when we want our answer to be specific in some  term
//it is c style conversion , FOR C++ STYLE conversion we use static_casr keyword to check wheter the conversion ca happen or not cz in cstyle conversion we can get undesired output therefore use staic_cast<float>(k)/m;
//cout<< static_cast<double>(k)/m <<"\n";
// <<endl is used for creating a new line btw prefer \n it creates flushing makes faster  . BASICALLY buffer is something u store in temporary memory and it flushes into permanent as soon as we save the file and \n does it whereas in case of endl we hv to explicitly do it by writing std::cout<< flush;
// 'g' is CHARACTER to be printed
string name ;
 cout<< "enter your name";
//cin>> name; //this cin object will read only one word and will ignore words written after spaces hence we use getline function
 //cout<< "hi " << name << "\n";
/* getline(cin, name);
 cout<< "hi Mr." << name;*/

 //ESCAPE SEQUENCES(- to print " " in output)  back slash \" xyz\" then your usual double quotes"
 cout<< "welcome to \"anoop world\"" << "anoop \\ gupta" << "\n";// to print back slash, this feature is generally used to copy the paths which we have inside fies so use// to print single hash
 //k=1245678996.70;
 cout<< k <<"\n";// the floating point format is that  it has precision 6 (rounds the digits to six numbers)
 //+,-,* work for both int float and all other types
 //and the sign of % is same as of a in a%b in case of int only
 cout<<(k%-m)<< " \n ";//independent of sign of m these above are binary operands and talking about uniary operands
 
 int c=++k;
 int l=k++;
 cout  <<"  " << c <<k<<l;// x++ likhne ka mtlb chahe print kro chahe na ab uski (means x ki value)value x+1 ho chuki hai par agar u have assiged y=x++ eski value toh x hi rahegi 1000 baar print krlo cahe
//898 is output
//ASSIGNMENT OPERATORS x+=10 means now x=x+10 similary x-=10, x*=2, and so on x&=4 and all means x=x(the sign)number
k*=2;
cout << "\n"<< k;
//comparison operators >= != new one is x<=>y this operands gives 0 when x=y , greater than zero if x>y
unsigned int j=9, i=7;
cout << "\n"<<(j>i); //, now logical operators && and || or operator ! is simply not operator
cout << (j<5 && j>0) << "  "  <<(i>0 or i==7);// can also use english and to represent && 
//short circuiting= suppose we provided x>0 && x<7 but x is negative so first condition is failed in && so irrespective of the second condition answer is boolalhpa false so the compiler does even compiles the second statement look below
cout << (j>10 && j++) << "       " << j; // the ouput is 9 only cz the compiler didn't even compiled the second statement
// associativity and precedence order ss taken no need to remember just that when multiple operators come in a single expression then how the precedence order is decided
//BITWISE OPERANDS &, | , ^ are simple and or xor operators do binary operation and present the final o/p as integers only
cout << (j&i) <<" " <<  (j^i) <<"\n      ";
cout <<(~j);
// the (,) it has order of lowest precedence its a binary operator and associativity is from left to right if (x.y)=a then a is assigned as y is assigned as the o/p
// if given (30>20>10) then cout<< "y" else "n" then n is printed on the console as associavity 30>20 so true so o/p is 1 now 1>10 so now o/p is 0 so the else statement n is printed

    return 0;
}
