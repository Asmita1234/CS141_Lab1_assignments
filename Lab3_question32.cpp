#include<iostream>
using namespace std;
int main()
{
 int n,ld,fd;
 cout<<"Enter any number : ";
 cin>>n;
 int a=n;
 ld=n%10;
 while(n>10)
 {
    
   n=n/10;
   fd=n;
 }
 cout<<"first digit of  "<<a<<" = "<<fd;
 cout<<"Last digit of  "<<a<<" = "<<ld;
 return 0;
}
