#include<iostream>
using namespace std;

int lcm(int a,int b);

int main() {
	int a,b,l;
	cout<<"enter any two numbers ";
	cin>>a>>b;
	l=lcm(a,b);
	cout<<"lcm ="<<l;
	return 0;
}

int lcm(int n1,int n2)
{
            static int cf=1;
	if((cf%n1==0)&&(cf%n2==0))
	{
		return cf;
	}
	cf++;
	lcm(n1,n2);
	return cf;
}
