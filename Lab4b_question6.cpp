#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n,int dig,int rev)
{
	
	int p;
  if (n!=0)
  {
  	p = pow(10,dig);
  	rev = rev + ((n%10)*p);
           
            reverse(n/10,dig-1,rev);
             
  	
  }
  else
  return rev;
  
}

int main() {
	
	int n,check,rev;
	rev = 0;
	int dig = 0;
	cout <<"Enter a number\n";
	cin >>n;
	check = n;
	while (check/10>0)
	{
		dig = dig+1;
		check = check/10;
	}
	cout <<"The reverse of the number is = "<<reverse(n,dig,rev);

	return 0;
}
