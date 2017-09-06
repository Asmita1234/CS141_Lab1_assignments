#include<iostream>
using namespace std;
int main()
{ int val,num,sum=0;
  cout<<"enter the number:";
  cin>>val;
  num=val;
  while(num!=0)
  { sum=sum+num%10;
    num=num/10;
  }
  cout<<"the sum of the digits of="<<val<<"is"<<sum;
  return 0;
  }
