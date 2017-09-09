#include<iostream>
using namespace std;
int main(){
  int n,p=1;
  cout<<"enter a number:";
  cin>>n;
  while(n!=0)
  { p=p*(n%10);
    n=n/10;
   }
  cout<<p<<endl;
  return 0;
}
  
