#include<iostream>
using namespace std;
int main()
{ int x; 
  cout<<"enter a number";
  cin>>x;
  if((x%5==0)&&(x%11==0))
   cout<<x<<"divisible by 5 and 11";
  else
   cout<<x<<"is not divisible by 5 and 11";
  return 0;
}
   
  
