#include<iostream>
#include<cmath>
using namespace std;
int pwr(int x, int y)
{  int z=1;
   while(y>0){
        z=z*x;
        y--;
   }
   return z;
}
int main()
{ int a,b;
  cout<<"enter integer";
  cin>>a;
  b=pwr(a,3);
  cout<<b;
 return 0;
}

  
   
