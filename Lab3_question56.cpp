#include<iostream>
using namespace std;
int main()
{
 int n,a,x,cp,sum,di,fect;
 cout<<"Enter nth term : ";
 cin>>n;
 cout<<"strong number between 1 to "<<n<<" : ";
 for(a=1;a<=n;a++)
 {
   x=a;
   cp=a;
   sum=0;
   while(x!=0)
   {
     fect=1;
     di=x%10;
     for(int i=1;i<di+1;i++)
     {
      fect=fect*i;
     }
     sum=sum+fect;
     x=x/10;
   }
  if(cp==sum)
    cout<<cp<<"		";;
 }
 return 0;
}
