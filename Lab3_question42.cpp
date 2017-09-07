#include<iostream>
using namespace std;
int main()
{ int i,y=1,p,n;
  cout<<"enter base:";
  cin>>n;
  cout<<"enter exponent:";
  cin>>p;
  for(i=1;i<=p;i++)
  { y=y*n;
  } 
  cout<<"result="<<y;
  return 0;
}
