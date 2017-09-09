#include<iostream>
using namespace std;
int main(){
  int n,tN,d,c,r;
  cout<<"enter a number:";
  cin>>n;
  cout<<"enter digits to search:";
  cin>>d;
  c=0;
  tN=n;
  while(tN>0)
{  r=tN%10;
   if(r==d)
    c++;
   tN/=10;
}
cout<<c,n;
return 0;
}

  
