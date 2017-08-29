#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float exponent,base,result;
cout<<"enter base and exponent respectively";
cin>>base>>exponent;
result=pow(base,exponent);
cout<<base<<"^"<<exponent<<"="<<result;
return 0;
}

