#include<iostream>
using namespace std;
void prime(int a)
{
  int pr=1,x;
  if(a==1)
   pr=0;
  else
  {
   for(x=2;x<=a/2;x++)
   {
     if(a%x==0)
     {
       pr=0;
       break;
     }
   }
  }
  if(pr==1)
    cout<<"Number is  prime"<<endl;
   else
    cout<<"Number is not prime"<<endl;
}
void armstrong(int a)
{
 int n=a,di,arm;
 while(a!=0)
 {
  di=a%10;
  arm=arm+di*di*di;
  a=a/10;
 }
 if(n==arm)
  cout<<"The number is Armstrong."<<endl;
 else
  cout<<"The number is not Armstrong."<<endl;
}
void perfect(int a)
{
     int pr=0;
     for(int x=1;x<=a/2;x++)
    {
      if(a%x==0)
      pr=pr+x;
    }
    if(a==pr)
     cout<<"The number is perfect";
    else
     cout<<"The number is not perfect";
}
int main()
{
 int a;
 cout<<"Enter a number : ";
 cin>>a;
 prime(a);
 armstrong(a);
 perfect(a);
 return 0;
}
