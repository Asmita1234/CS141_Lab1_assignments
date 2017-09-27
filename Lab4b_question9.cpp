#include <iostream>
using namespace std;
 
int factorial(int n,int fact)
{
	if (n!=0)
	{
		fact = fact*n;
		factorial(n-1,fact);
	}
	else
	return fact;
 
}
 
int main() {
 
   int n,ans;
   cout <<"Enter a number\n";
   cin >>n;
   ans = factorial(n,1);
   cout <<"The factorial of the number = "<<ans;
	return 0;
}
