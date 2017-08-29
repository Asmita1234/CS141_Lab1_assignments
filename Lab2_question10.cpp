#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f,add,av,percent; 
cout<<"enter marks of five subjects";
cin>>a>>b>>c>>d>>e;
cout<<"enter sum of total marks of five subjects";
cin>>f;
add=a+b+c+d+e;
av=add/5;
percent=av/f*100;
cout<<"total"<<add;
cout<<"average"<<av;
cout<<"percentage"<<percent;
return 0;
}

