#include<iostream>
using namespace std;
void print_armstrong(int a,int b)
{
  int arm,di,cp,y;
  for(int x=a;x<=b;x++)
  {
    cp=x;
    y=x;
    arm=0;
    while(y!=0)
    {
      di=y%10;
      arm=arm+di*di*di;
      y=y/10;
    }
    if(arm==cp)
      cout<<cp<<"	";
  }
}
 
int main()
{
  int i,n;
  cout<<"Enter interval : ";
  cin>>i>>n;
  print_armstrong(i,n);
  return 0;
}
