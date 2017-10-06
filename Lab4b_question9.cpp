#include <iostream>
using namespace std;

/*PROGRAM TO PRINT SUM OF DIGITS OF A NUMBER USING RECURSSIONS*/

int factorial(int n)
{ 
        if(n==1)
        {
              return 1;
        }
        else
        {
              return n*factorial(n-1);
        }
}

int main()
{
        int num;
        cout<<"PROGRAM TO PRINT FACTORIAL OF A NUMBER USING RECURSSIONS";
        cout<<"\n \nENTER NUMBER: ";
        cin>>num;
        cout<<"\n \nFactorial of the number is: "<<factorial(num);
        return 0;
}
