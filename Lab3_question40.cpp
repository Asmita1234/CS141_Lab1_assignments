#include<iostream>
using namespace std;
int main()
{
 int num,di,rev=0;
 cout<<"Enter a number : ";
 cin>>num;
 while(num!=0)
 {
  di=num%10;
  rev=rev*10+di;
  num=num/10;
 }
 while(rev!=0)
 {
  di=rev%10;
  switch(di)
  {
   case 0:cout<<"zero ";break;
   case 1:cout<<"one ";break;
   case 2:cout<<"two ";break;
   case 3:cout<<"three ";break;
   case 4:cout<<"four ";break;
   case 5:cout<<"five ";break;
   case 6:cout<<"six ";break;
   case 7:cout<<"seven ";break;
   case 8:cout<<"eight ";break;
   case 9:cout<<"nine ";break;
   case 10:cout<<"ten ";break;
   defult:break;
  }
  rev=rev/10;
 }
 return 0;
} 
