#include <iostream>
using namespace std;

int HCF(int n1,int n2,int i,int cf,int hcf)
{
	
	if (i<=n2)//n1>n2
	{
		if(n1%i==0 && n2%i==0 && i>cf)
		{
			hcf = i;
			cf = hcf;
		
		}
			HCF(n1,n2,i+1,cf,hcf);
	}
	else
	return hcf;
	
}

int main() {
	
	int n1,n2,ans;
	cout <<"Enter two numbers\n";
	cin >>n1>>n2;
	if (n1>n2)
	{
		ans = HCF(n1,n2,1,0,0);
	}
	else
	if (n2>n1)
	{
		ans = HCF(n2,n1,1,0,0);
	}
	cout <<"The highest common factor of the two numbers is = "<<ans;
	return 0;
}
