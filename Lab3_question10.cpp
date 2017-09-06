#include<iostream>
using namespace std;
int main()
{ char a;
  cout<<"enter any alphabet";
  cin>>a;
  if(a>='a' && a<='z')
   cout<<a<<" is lowercase alphabet";
  else cout<<a<<"is uppercase alphabet";
  return 0;
}
