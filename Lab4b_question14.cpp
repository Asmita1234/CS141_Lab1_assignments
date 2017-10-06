#include <iostream>
using namespace std;

int arraysum(int arr[],int j,int l);

int main() {
	int n,arr[100],i,s=0;
	cout<<"enter the nuber of elemnts in an array\n";
	cin>>n;
	cout<<"enter "<<n<<" elements of array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	s=arraysum(arr,0,n);
	cout<<"the sum of th elements is "<<s;
	return 0;
}

int arraysum(int arr[],int j,int l)
{     
	if(j>=l)
	  return 0;
	
            cout<< arr[j]<<"\n";
            return( arr[j]+ arraysum(arr, j + 1,l));
}
