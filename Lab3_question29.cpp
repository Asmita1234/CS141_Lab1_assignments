#include<iostream>
using namespace std;
int main()
{ int n,sum=0;
  cout<<"enter natural number to get sum of all odd number upto:";
  cin>>n;
  for(int i=1;i<=n;i+=2)
  { sum+=i;
  }
  cout<<"sum= "<<sum;
  return 0;
}
