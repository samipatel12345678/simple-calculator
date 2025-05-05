//Simple-Calculator
#include <bits/stdc++.h>
using namespace std;
int main()
{
   //define variables
   string operation;
     double number1, number2;
      

      //Get the user input
      cout<<"Enter First Number: ";

      cin>>number1;

      cout<<" Operation(+,-,*,/)";

      cin>>operation;

      cout<<"Enter Second Number: ";

       cin>>number2;

       //If else statement checking entered operations
       if(operation=="+"){

      cout<<" The Addition  is ";

        cout<< number1 +number2;

       }
       else if(operation=="-"){

         cout<<" The Substraction  is ";

        cout<<number1-number2;

       }
else if(operation=="*"){

        cout<<" The Multiplication  is ";

        cout<<number1*number2;

       }
       else if(operation=="/"){

        cout<<" The Division  is ";

        cout<<number1 /number2;

       }
       
 return 0;
  }
 
