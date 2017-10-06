#include <iostream>
using namespace std;
 
/* PROGRAM TO FIND NTH FIBONACCI NUMBER USING RECURSION*/
int fibo_recur(int n)
{
    if (n == 1 )
        return 0;
   else if(n==2)
       return 1;
    else
        return fibo_recur(n - 1) + fibo_recur(n - 2);;
}

int main()
{
    int n;
    cout<<"PROGRAM TO FIND NTH FIBONACCI NUMBER USING RECURSION";
        cout<<"\n \nEnter the integer n to find nth fibonnaci no.";
        cin>>n;
        cout<<"\n \nThe nth Fibonacci number is: "<<fibo_recur(n)<<endl;
        return 0;
}
