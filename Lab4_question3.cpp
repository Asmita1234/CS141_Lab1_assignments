#include<iostream>
using namespace std;
int maximum(int num1,int num2)
 { if (num1>=num2)
    return num1;
   else
  return num2;
 }
 
int main()
{ int a,b,max;
  cout<<"enter two positive integer:";
  cin>>a>>b;
  max = maximum(a,b);
  cout<<"maximum is"<<max<<endl;
  return 0;
} 
  

 
