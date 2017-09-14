#include <iostream>

using namespace std;

int main()
{
    int a,d,pr;
    pr=0;
    cout<<"Enter a number : ";
    cin>>a;
    for(int x=1;x<=a/2;x++)
    {
      if(a%x==0)
      pr=pr+x;
    }
    if(a==pr)
     cout<<"The number is perfect";
    else
     cout<<"The number is not perfect";
    return 0;
}

