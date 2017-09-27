#include <iostream>
using namespace std;

int LCM(int n1,int n2,int i,int lcm)
{
	int mult,j,k=1;
	if (n1!=1)//n1>n2
	{
		if(n1%i==0)
		{
		mult = i;
		j = i;
		}
		if (n2%i==0)
		{
		mult = i;
		k = i;
		}
		else
		{
		mult = 1;
		i++;
		j = 1;
		k = 1;
		}
		
		lcm = lcm*mult;
		LCM(n1/j,n2/k,i,lcm);
		
	}
	else 
	return lcm;
}

int main() {
	int n1,n2,ans;
	cout <<"Enter two numbers\n";
	cin >>n1>>n2;
	if (n1>n2)
	ans = LCM(n1,n2,2,1);
	else
	if (n2>n1)
	ans = LCM(n2,n1,2,1);
	cout <<"The of two numbers is = "<<ans;
	return 0;
}
