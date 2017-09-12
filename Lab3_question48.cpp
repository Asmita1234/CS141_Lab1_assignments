#include<iostream>
using namespace std;
int  main()
{
	int n, count;
        cout<<"Enter the value of n : ";   
     	cin>>n;

	cout<<"Prime Numbers  Between one and "<<n<<" are :\n";

	for(int i=2; i<=n; i++)						
{	count=0;									for(int j=2; j<i; j++)
{
	if(i%j==0) 								{    	count++;   									}}				
	if(count==0)			
	{cout<<i<<" ";}}
 	return 0;
}

