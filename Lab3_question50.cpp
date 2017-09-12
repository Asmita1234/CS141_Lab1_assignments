#include<iostream>
using namespace std;
int main()
{  int num,i,j,k,r;
   cout<<"enter a number";
   cin>>num;
   for(i=2;i<num;i++)
      {  r=i;
         if((num%r)==0){
          k=0;
          for(j=2;j<r;j++){
             if(r%j==0)
               k++;
          }
          if(k==0)
            cout<<"prime factors are:"<<r<<"\n";
       }
     }
 return 0;
}
  
