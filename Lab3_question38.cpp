#include<iostream>
using namespace std;
int main()
{
 int n,di,rev;
 rev=0;
 cout<<"Enter any number : ";
 cin>>n;
 int c=n;
 while(n!=0)
 {

   di=n%10;
   rev=rev*10+di;
   n=n/10;
 }
 if(c==rev)
  cout<<"The number is Palindrome ";
 else
  cout<<endl<<"The number is not Palindrome  ";
 return 0;
}
