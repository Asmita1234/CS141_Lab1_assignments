#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num,swap,ld,fd,d=0;
  cout<<"Enter a number : ";
  cin>>num;
  swap=num;
  ld=num%10;
  while(num!=0)
  {
    fd=num%10;
    num=num/10;
    d++;
  }
  swap=swap-ld+fd;
  swap=swap-(fd*pow(10,d-1));
  swap=swap+(ld*pow(10,d-1));
  cout<<"Swap of number : "<<swap;
  return 0;
}
