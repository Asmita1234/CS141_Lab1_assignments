#include <iostream>
using namespace std;

int add(int n,int sum)
{
	int dig;
	if (n!= 0)
	{
		dig = n%10;
		sum = sum+dig;
		add(n/10,sum);
	}
	else
	return sum;
}
int main() {
	
	int n,sum,ans;
	sum = 0;
	cout <<"Enter a number\n";
	cin >>n;
	ans = add(n,sum);
	cout <<"The sum of digits = "<<ans;
	return 0;
}
