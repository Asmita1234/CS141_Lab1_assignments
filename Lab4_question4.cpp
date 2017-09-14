#include<iostream>
using namespace std;
void even_odd()
{
 int a;
 cout<<"Enter a number : ";
 cin>>a;
 if(a%2==0)
 {
  cout<<a<<" is even"<<endl;
 }
 else
  cout<<a<<" is odd.";
}
int main()
{
 even_odd();
 return 0;
}
