#include<iostream>
using namespace std;
int main()
{ int a;
  cout<<"enter week number";
  cin>>a;
  if(a==1)
   cout<<a<<"= monday";
  else if (a==2)
   cout<<a<<"= tuesday";
  else if(a==3)
   cout<<a<<"= wednesday";
  else if(a==4)
   cout<<a<<"= thursday";
  else if(a==5)
   cout<<a<<"= friday";
  else if(a==6)
   cout<<a<<"= saturday";
  else if(a==7)
   cout<<a<<"= sunday";
  else cout<<a<<" invalid input. Please enter week between 1-7";
  return 0;
}
  
