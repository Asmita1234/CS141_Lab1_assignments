#include <iostream>
using namespace std;

void number(int i,int n)
{
	if (i<n)
	{
		cout <<i <<endl;
		number(i+1,n);
	}
	
}
int main() {
	int n,ans;
	cout <<"Enter number upto which natural numbers must be printed\n";
	cin >>n;
	int i = 1;
	cout <<"All natural numbers from 1 to "<<n <<"are = \n";
	number(i,n);
	
	
	return 0;
}
