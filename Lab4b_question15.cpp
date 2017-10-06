#include <iostream>
using namespace std;

int maximum (int arr[],int j,int l);
int minimum(int arr[],int j,int l);
int main() {
	int n,arr[100],i,max,min;
	cout<<"enter the number of elemnts in an array\n";
	cin>>n;
	cout<<"enter "<<n<<" elements of array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max= maximum(arr,0,n);
	min=minimum(arr,0,n);
	cout<<"the maximum is "<<max<<" and the minimum is "<<min;
	return 0;
}



int minimum(int arr[], int j, int l)
{
    int min;

    if(j >= l-2)
    {
        if(arr[j] < arr[j + 1])
            return arr[j];
        else
            return arr[j + 1];
    }

    min = minimum(arr, j + 1, l);

    if(arr[j] < min)
        return arr[j];
    else
        return min;
}
int maximum(int arr[], int j, int l)
{
    int max;

    if(j >= l-2)
    {
        if(arr[j] > arr[j + 1])
            return arr[j];
        else
            return arr[j + 1];
    }

    max = maximum(arr, j + 1, l);

    if(arr[j] > max)
        return arr[j];
    else
        return max;
}


