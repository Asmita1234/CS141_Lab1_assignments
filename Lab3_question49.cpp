#include <iostream>
using namespace std;
int main()

{
        int n, count,sum=0;
        cout<<"Enter the value of n : ";
        cin>>n;
        for(int i=2; i<=n; i++)
{       count=0;	
        for(int j=2; j<i; j++)
{
        if(i%j==0)
        { count++;}}
        if(count==0)
        {sum+=i;}}
        cout<<"sum of prime nos from 1 to"<<n<<"is"<<sum<<" ";
	return 0;
}

