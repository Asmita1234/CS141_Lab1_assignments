#include<iostream>
using namespace std;
int main()
{ char a;
  cout<<"enter any character";
  cin>>a;
  if((a>='a'&& a<='z')||(a>='A'&& a<='Z'))
   cout<<a<<"is an alphabet";
  else if(a>='1'&& a<='9')
   cout<<a<<"is digits";
  else cout<<a<<"is a special character";
  return 0;
}
