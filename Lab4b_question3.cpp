#include <iostream>
using namespace std;

int odd(int n, int i)
{
	if (i<=n)
	{
		cout <<i <<endl;
		odd(n,i+2);
	}
	else
	if (i>n)
	return 1;
	
}

int even(int n, int j)
{
	if (j<=n)
	{
		cout <<j <<endl;
		even(n,j+2);
	}
	else
	return 1;
}



int main() {
	
	int n,i,j,k,ch;
	cout <<"Enter the upper limit\n";
	cin >>n;
	cout <<"Enter the lower limit\n";
	cin >>k;
	if (k%2==0)
	{
	j = k;
	i = k+1;
	}
	else 
	if (k%2 != 0)
	{
            j = k+1;
	    i = k;
	    }
	cout <<"Press 1 to print list of odd numbers and press 2 for list of all even numbers\n";
	cin >>ch;
	if (ch == 1)
	{
		odd(n,i);
	}
	else
	if (ch == 2)
	{
		even(n,j);
	}
	else
	cout <<"Invalid entry\n";
	return 0;
}
