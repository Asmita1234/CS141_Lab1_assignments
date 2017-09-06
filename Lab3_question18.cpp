#include<iostream>
using namespace std;
int main()
{ float sp,cp,l,p;
   cout<<"enter the selling price:";
   cin>>sp;
   cout<<"enter the cost price:";
   cin>>cp;
   if(cp>sp)
   {l=cp-sp;
   cout<<" loss:"<<l;
   }
   else if(cp<sp)
   {
   p=sp-cp;
   cout<<"profit:"<<p;
   }
   else cout<<"no profit no loss";
   return 0;
   }
   
