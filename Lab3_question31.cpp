#include<iostream>
using namespace std;
int main()
{ int num,count=0;
  cout<<"enter a number:";
  cin>>num;
  while(num){
      num=num/10;   
      count++;
      }
  cout<<"total digits is: "<<count<<endl;
  return 0;
}
