#include<iostream>
using namespace std;
void print_strong(int a,int b)
{
 int di,fect,sum=0,cp,y;
 for(int x=a;x<=b;x++)
 {
  sum=0;
  cp=x;
  y=x;
  while(y!=0)
  {
   fect=1;
   di=y%10;
   for(int i=1;i<=di;i++)
  {
   fect=fect*i;
  }
  sum=sum+fect;
   y=y/10;
  }
 if(sum==cp)
  cout<<cp<<"	";
 }
}
int main()
{
 int i,n;
 cout<<"Enter interval : ";
 cin>>i>>n;
 print_strong(i,n);
 return 0;
}
