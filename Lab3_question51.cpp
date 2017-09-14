#include<iostream>
using namespace std;
int main()
{
 int a,n,di,arm;
 arm=0;
 cout<<"Enter a number : ";
 cin>>a;
 n=a;
 while(a!=0)
 {
  di=a%10;
  arm=arm+di*di*di;
  a=a/10;
 }
 if(n==arm)
  cout<<"The number is Armstrong.";
 else
  cout<<"The number is not Armstrong.";
 return 0;
}

