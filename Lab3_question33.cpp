#include<iostream>
using namespace std;
int main()
{ int n,sum=0,f,l;
  cout<<"enter any number to find sum of first and last digit";
  cin>>n;
  l=n%10;
  f=n;
  while(n>=10){
    n=n/10;
  }
  f=n;
  sum=f+l;
  cout<<sum<<endl;
 return 0;
}
  
