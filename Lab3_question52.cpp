#include<iostream>
using namespace std;
int main()
{ 
  int a,b,n,arm,x,di,cp;
  cout<<"Enter nth term : ";
  cin>>n;
  cout<<"The armstrong between 1 and "<<n<<" = ";
  for(a=1;a<=n;a++)
   { 
     x=a;
     cp=a;
     arm=0;
     while(x!=0)
     {
       di=x%10;
       arm=arm+di*di*di;
       x=x/10;
     }    
     if(cp==arm)
       cout<<cp<<"	";

   }
    
  return 0;
}
