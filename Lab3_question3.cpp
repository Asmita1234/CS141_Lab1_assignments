#include<iostream>
using namespace std;
int main()
{ int num;
  cout<<"enter an number:";
  cin>>num;
  if(num>0)
   cout<<num<<"is positive";                                                    else if(num==0)
   cout<<num<<"is zero";
  if(num<0)
   cout<<num<<"is negative";
}

