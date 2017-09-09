#include<iostream>
using namespace std;
int main()
{ int n,i;
  cout<<"enter number:";
  cin>>n;
  for(i=1;i<=n;++i)
  { if(n%i==0)
     cout<<"factrors are"<<i<<endl;
   }
  return 0;
}
