#include<iostream>
using namespace std;

float dia(float a)
{ float y=a*2;
     return y;
}
float cir(float a)
{    float z=3.14*2*a;
     return z;
}
float area(float a)
{    float l=3.14*a*a;
     return l;
}
int main()
{ float d,c,a,r;
  cout<<"enter radius:";
  cin>>r;
  d= dia(r);
  c=cir(r);
  a=area(r);
  cout<<"diameter="<<d;
  cout<<" circumference="<<c;
  cout<<" area="<<a;
  return 0;
}
