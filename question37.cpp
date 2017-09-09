#include<iostream>
using namespace std;
int main()
{ int n,r=0,rem;
  cout<<"enter a number:";
  cin>>n;
  while(n!=0){
   rem=n%10;
   r=r*10+rem;
   n/=10;
  }
  cout<<r<<endl;
  return 0;
}
