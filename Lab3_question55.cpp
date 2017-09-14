 #include<iostream>
using namespace std;
int main()
{
 int sum=0,num,di,fect,cp;
 cout<<"Enter a number : ";
 cin>>num;
 cp=num;
 while(num!=0)
 {
  fect=1;
  di=num%10;
  for(int x=1;x<di+1;x++)
  {
   fect=fect*x;
  }
  sum=sum+fect;
  num=num/10;
 }
 if(cp==sum)
 {
  cout<<"Strong number."<<endl;
 }
 else
 {
  cout<<"Not Strong number.";
 }
 return 0;
}
