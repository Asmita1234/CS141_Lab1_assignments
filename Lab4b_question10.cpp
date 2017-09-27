#include <iostream>
using namespace std;

int fibonacci(int n,int a,int b,int c)
{
	if (n!=0)
	{
		c = a+b;
		a = b;
		b = c;
		fibonacci(n-1,a,b,c);
		
	}
	else
	return c;
	
 
 
}
int main() {
	
	int n,ans;
	cout <<"Enter a number\n";
	cin >>n;
	if (n == 1)
	cout <<"The nth number is = 0";
	else
	if (n == 2)
	cout <<"The nth number is = 1";
	else
	ans = fibonacci(n-2,0,1,0);
	cout <<"The nth fibonacci number is = "<<ans;
	return 0;
}
