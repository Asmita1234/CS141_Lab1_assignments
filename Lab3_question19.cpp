#include<iostream>
using namespace std;
int main()
{ int phy,chem,bio,math,comp;
  float per;
  cout<<"enter marks of phy,chem,bio,math,comp respectively";
  cin>>phy>>chem>>bio>>math>>comp;
  per=(phy+chem+bio+math+comp)/5;
  cout<<"percentage"<<per;
  if(per>=90)
   cout<<"grade A";
  else if(per>=80)
   cout<<"grade B";
  else if(per>=70)
   cout<<"grade C";
  else if(per>=60)
   cout<<"grade D";
  else if(per>=40)
   cout<<"grade E";
  else cout<<"grade F";
  return 0;
}


