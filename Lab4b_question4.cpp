#include <iostream>
using namespace std;

int naturalsum(int n)
{
	
	if (n!=0)
	{
		return (n + naturalsum(n-1));
		
	}
	else 
	return 0;
}

int main() {
	
	int n,sum;
	cout <<"Enter number upto which natural numbers must be added\n";
	cin >>n;
            sum = naturalsum(n);
	cout <<"The sum of natural numbers from 1 to "<<n <<" is = "<<sum;
	 
	return 0;
}
