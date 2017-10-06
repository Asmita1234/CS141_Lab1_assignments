#include <iostream>
using namespace std;

/*PROGRAM TO PRINT SUM OF DIGITS OF A NUMBER USING RECURSSIONS*/

int sumOfDigits(int n)
{ 
        if(n==0)
        {
              return 0;
        }
        else
        {
              return (n%10) + sumOfDigits(n/10);
        }
}

int main()
{
        int num;
        cout<<"PROGRAM TO PRINT SUM OF DIGITS OF A NUMBER USING RECURSSIONS";
        cout<<"\n \nENTER NUMBER: ";
        cin>>num;
        cout<<"\n \nSUM OF DIGITS: "<<sumOfDigits(num);
        return 0;
}
