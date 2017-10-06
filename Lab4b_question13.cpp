#include <iostream>
using namespace std;

int array(int arr[],int j,int l);

int main() {
	int n,arr[100],i;
	cout<<"enter the number of elemnts in an array";
	cin>>n;
	cout<<"enter "<<n<<" elements of array";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the elements are";
	array(arr,0,n);
	return 0;
}

int array(int arr[],int j,int l)
{     
	if(j>=l)
	  return 0;
	
            cout<< arr[j];
            array(arr, j + 1,l);
}


