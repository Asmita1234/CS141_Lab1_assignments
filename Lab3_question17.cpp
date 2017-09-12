#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,discriminant,ans1,ans2,realpart,imaginarypart;
cout<<"enter coefficients a,b and c";
cin>>a>>b>>c;
discriminant=(b*b)-(4*a*c);
if (discriminant>0)
{ans1=((-b)+sqrt(discriminant))/(2*a);
ans2=((-b)-sqrt(discriminant))/(2*a);
cout<<"the root is real and different";
cout<<"answer 1="<<ans1;
cout<<"answer 2="<<ans2;}
else if (discriminant==0)
{ans1=((-b)+sqrt(discriminant))/(2*a);
cout<<"the root is real and same";
cout<<"answer 1="<<ans1;
}
else
{realpart=(-b)/(2*a);
imaginarypart=(sqrt(-discriminant))/(2*a);
cout<<"the root is complex and different";
cout<<"answer 1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
cout<<"answer 2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;}
return 0;
}

