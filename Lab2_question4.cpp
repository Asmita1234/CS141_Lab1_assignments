#include<iostream>
using namespace std;
int main()
{
int a,year,week,day; 
cout<<"enter number of days";
cin>>a;
year=a/365;
week=(a-(year*365))/7;
day=a-((year*365)+(week*7));
cout<<"years="<<year;
cout<<"weeks="<<week;
cout<<"days="<<day;
return 0;
}

