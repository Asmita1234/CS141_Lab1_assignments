#include<iostream>

using namespace std;

void ONumber( int A, int B)
{	
	static int x = B;
	if(A>=B)
	{	
		if(x%2!=0)
			cout << x << endl;
		x++;
		ONumber(A-1,B);
	}		
}
void ENumber( int A, int B)
{
        static int x = B;
        if(A>=B)
        {
                if(x%2==0)
			cout << x << endl;
                x++;
                ENumber(A-1,B);
        }
}

int main()
{
	int a,b;
	cout << "Enter two integers:	";
	cin >> a >> b;
	char c;
	cout << "Even 'e' or odd 'o'	";
	cin >> c;
	if( c == 'o')
	{
		if( a>b)
			ONumber(a, b);
		else 
			ONumber(b, a);
	}
	else if( c == 'e')
        {       
                if( a>b)
                       ENumber(a, b);
                else
                       ENumber(b, a);
        }
	else
		cout << "Unacceptable character.Enter 'e' or 'o'.";
	return 0;
}
