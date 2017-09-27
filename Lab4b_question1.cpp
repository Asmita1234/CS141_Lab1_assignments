#include <iostream>
using namespace std;
int power(int n,int p){
	if (p>0)
	{
		return (n*power(n,p-1));
	}
	else
	return 1;
}
 
int main() {
 
	int n,p,ans;
	cout <<"Enter the number\n";
	cin >>n;
	cout <<"Enter the power number must be raised to\n";
	cin >>p;
	ans = power(n,p);
	cout <<"The result is = "<<ans;
	return 0;
}
