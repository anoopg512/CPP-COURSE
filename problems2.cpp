/*
#include <iostream>
using namespace std;
int main(){
     

      return 0;
}
*/
//------------------------GREATEST OF THREE NUMBERS
/*#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>> a >> b >> c;
    if(a>=b && a>=c){
        cout<< a;}
    else if(b>=a && b>=c){
        cout<< b;
    }
    else{
        cout << c;
    }
    return 0;
}*/


//LEAP YEAR IS ONE WHICH IS DIVISIBLE BY 4 BUT NOT BY 100
// AND ALSO DIVISIBLE BY 400



// ~~~~~~~~~~~~~~~~~USE OF STATIC INT USING LOOP
/*#include <iostream>
using namespace std;
void fun(){
    static int x=6;
    int y=9;
    x++;
    y++;
    cout << x <<" " << y;
}
int main(){
     fun() ; cout<<"\n";// here op is 7 10
     fun(); cout <<"\n";// here op is 6 10 cz static is written there  the declaration is executed once only
     fun();
    // main(); here it is called RECURSION function calls itself inside the fnction since there is no terminating condition here so you will get segmentation fault here. after some time.

      return 0;
}*/
///------------------ return; ==if u want to come out of a function means want to terminate a function call or anything



//~~~~~~~~~~~~SMALLEST DIVISOR OF A NUMBER
/*#include <iostream>
using namespace std;

int main() {
int a,b,c;
cout << "enter no";
cin>> a;
b= 2;
while(b<a){
    
        if(a%b==0){
            cout << "smallest div is " << b;
            break; 
        }
        b++;
    }
    */





//~~~~~~~~~~~~ INVERTED TRIANGLE
  /* #include <iostream>
using namespace std;
int main(){
    int a;
     cin >> a;
     for(int j=1;j<=a-1;j++){

        cout<<"  ";
        cout <<"\n";
     }
    for(int i=1;i<=a;i++){
        cout<< "*";
        
        }

      return 0;
}*/






//~~~~~~~~~~~ counting the number of digits in a provided input

/*#include <iostream>
using namespace std;
int main(){
    cout << "enter the given number"; int a;
    cin>> a;
   int i;
    while (a>0){ // NOT NECESSARY THAT CONDITION CAN BE APPLIED ONLY ON THE INITIATED VARIABLE
        a= a/10;
        i++;
    }
    cout << i;

      return 0;
}*/



// ~~~~~~~~~~~ PRINTING ALL THE DIVISORS OF THE GIVEN NUMBER
/*#include <iostream>
using namespace std;
int main(){
     cout <<"enter the given no";
     int a; cin>> a;
     int i=1;
     while(i<=a){
        if(a%i==0){
            cout << a/i << " ";
            
        }
        i++;
        

     }

      return 0;
}*/


//~~~~~~~~~~ FACTORIAL OF A GIVEN NUMBER
/*#include <iostream>
using namespace std;
int main(){
     cout <<"enter the given no";
     int a ,b; cin>> a; int i=1;
     while(a>0){
        i=a*i;
        a--;            // IMPPPPPPPPPPPPPPPPPPPPP POINT AS TOLD EARLIER ALSO NO NEED TO INCREMENT OR DECREMENT THE INITIALIZED 'i'variable
}
     cout << i;


      return 0;
}*/







//~~~~~~~~~~~~~ gcd of 2 n0s.

/*#include <iostream>
using namespace std;
int main(){
     
    cout<<"enter 2 nos"; 
    int a,b;
    cin>>a >> b;  
    int c= min(a,b);
    int i=1;
    int ans =1;
    while(i<=c){
        if (a%i==0 && b%i==0){
            ans =i ; 
         }
        i++;
        }
    cout << i;
      return 0;
}*/













//~~~~~~~~~~~~~~~~~LCM OF TWO NUMBERS
/*#include <iostream>
using namespace std;
int main(){
     
    cout<<"enter 2 nos"; 
    int a,b;
    cin>>a >> b;
int c= max(a,b);
int d= a*b;
int i= c;
while(c<=d){
    if(i%a==0 and i%b==0){
        break;
        }
        i++;
}
   cout << i; 
     
 
}*/










//~~~~~~~~~~~ no of ways to jump to reach top of stairs when u can skip only one step = the ans is the fibonacci sequence whose next o/p is obtained by adding the previous 2 nos

//~~~~~~~~~~~~~~~~ check prime or not
#include <iostream>
using namespace std;
int main(){
    int a; cout<<"enter a no";
    cin>> a; int i=2;
    while(i<a){
        if(a%i==0){

            cout << "not prime"; 
            break;
            }
            else if (~(a%i== 0))
            {
                cout << " prime";
                break;
            }
     
        i++;
    

    }
    if(a==2){
        cout << "prime";
    }
    //cout <<"prime number";

    





    return 0;
    }