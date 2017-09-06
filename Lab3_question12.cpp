#include<iostream>
using namespace std;
int main()
{ int a;
  cout<<"enter month number";
  cin>>a;
  if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
   cout<<a<<"= 31 days";
  else if(a==2)
   cout<<a<<"= 28 or 29 days";
  else if(a==4||a==6||a==9||a==11)
   cout<<a<<"= 30 days";
  else cout<<a<<" invalid month number. enter month number between 1-12";
  return 0;
}

