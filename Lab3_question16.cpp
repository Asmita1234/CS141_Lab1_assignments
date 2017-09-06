#include<iostream>
using namespace std;
int main()
{  int a,b,c;
   cout<<"enter three sides of triangle a,b,c";
   cin>>a;
   cin>>b;
   cin>>c;
   if(a==b&&b==c)
   cout<<"triangle is equilateral";
   else if(a==b||a==c)
   cout<<"isosceles triangle";
   else if(b==c||b==a)
   cout<<"isosceles triangle";
   else if(c==a||c==b)
   cout<<"isosceles triangle";
   else cout<<"scalene triangle";
return 0;
}
