#include<iostream>
using namespace std;
int main()
{ 
  int a,b,n,x,pr;
  cout<<"Enter nth term : ";
  cin>>n;
  cout<<"perfect number between 1 and "<<n<<" = ";
  for(a=1;a<=n;a++)
   { 
     x=a;
     pr=0;
     for(b=1;b<=x/2;b++)
     {
       if(x%b==0)
       pr=pr+b;
     }
     if(x==pr)
      cout<<x<<"	";
     
   }     
  return 0;
} 

