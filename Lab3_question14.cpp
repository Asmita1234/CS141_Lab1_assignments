#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout<<"enter three angles of the triangle";
  cin>>a;
  cin>>b;
  cin>>c;
  if(a+b+c==180)
   cout<<a+b+c<<" is a valid triangle";
  else cout<<a+b+c<<" is not a valid triangle";
  return 0;
}
