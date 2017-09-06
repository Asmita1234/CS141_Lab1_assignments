#include<iostream>
using namespace std;
int main()
{ int a,b,c,s;
  cout<<"enter three sides of the triangle";
  cin>>a;
  cin>>b;
  cin>>c;
  if((a+b)>=c)
   cout<<"triangle is valid";
  else if((b+c)>=a)
   cout<<"triangle is valid";
  else if((c+a)>=b)
   cout<<"triangle is valid";
  else cout<<"triangle is not valid";
  return 0;
}


