#include<iostream>
using namespace std;
int main()
{
int a,b,add,multiply,sub,divide,rem;
cout<<"enter two integer";
cin>>a;
cin>>b;
add=a+b;
sub=a-b;
multiply=a*b;
divide=a/b;
rem=a%b;
cout<<"sum="<<add;
cout<<"subtract="<<sub;
cout<<"multiplication="<<multiply;
cout<<"division="<<divide;
cout<<"remainder="<<rem;
return 0;
}
