#include<iostream>

using namespace std;

int power( int A, int B)
{
	int x;
	if(B==0)
		x = 1;
	else
		x = A*power(A,B-1);
	return (x);
}

int main()
{
	int a,b;
	cout << "Enter the number:  ";
	cin >> a;
	cout << "Enter the power: ";
	cin >> b;
	cout << "The result is " << power(a,b);
	return 0;
}
