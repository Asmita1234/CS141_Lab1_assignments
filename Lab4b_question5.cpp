#include <iostream>
using namespace std;

int even(int n,int i)
{
	if (i!=n)
	{
		return (i+even(n,i+2));
		
	}
	else
	return 0;
	
}

int odd(int n, int j)
{
	if (j!=n)
	{
		return (j+odd(n,j+2));
	}
	else
	return 0;
}

int main() {
	int i,j,k,ch,n,sum;
	cout <<"Enter the upper limit\n";
	cin >>n;
	cout <<"Enter the lower limit\n";
	cin >>k;
	if (k%2 == 0)
	{
		i = k;
		j = k+1;
	}
	else
	if (k%2 != 0)
	{
		i = k+1;
		j = k;
	}
	cout <<"Enter 1 to print sum of even numbers and 2 to print sum of odd numbers\n";
	cin >>ch;
	if (ch == 1)
	{
		sum = even(n,i);
		cout <<"Sum of even numbers is = "<<sum;
	}
	else
	if (ch == 2)
	{
		sum = odd(n,j);
		cout <<"Sum of odd numbers is = "<<sum;
	}
	else
	cout <<"Invalid entry\n";
	
	return 0;
}
