#include<iostream>
using namespace std;
void prime(int a,int b)
{
  int pr,x;
  for(int i=a;i<=b;i++)
  {
   pr=1;
   if(i==1)
   pr=0;
   for(x=2;x<=i/2;x++)
    {
     if(i%x==0)
     {
       pr=0;
       break;
     }

   }
  if(pr==1)
    cout<<i<<endl;
  }
 }
 int main()
{
 int a,b;
 cout<<"Enter interval ";
 cin>>a>>b;
 prime(a,b);
 return 0;
}
