#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float p,r,t,div,result;
cout<<"enter principle";
cin>>p;
cout<<"enter time";
cin>>t;
cout<<"enter rate of interest";
cin>>r;
div=r/100;
result=p*pow((1+div),t)-p;
cout<<"compound interest="<<result;
return 0;
}
