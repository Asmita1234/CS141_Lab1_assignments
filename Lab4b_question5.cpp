#include<iostream>

using namespace std;

int ONumber( int A, int B)
{	
	static int x = B;
	static int y = 0;
	if(A>=B)
	{
		if(x%2!=0)
			y = y + x;
		x++;
		ONumber(A-1,B);
	}
	return (y);		
}
int ENumber( int A, int B)
{
	static int y = 0;
        static int x = B;
        if(A>=B)
        {
                if(x%2==0)
			y = y + x;
                x++;
                ENumber(A-1,B);
        }
	return (y);
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
			cout << "Result = " << ONumber(a, b);
		else 
			cout << "Result = " << ONumber(b, a);
	}
	else if( c == 'e')
        {       
                if( a>b)
                       cout << "Result = " << ENumber(a, b);
                else
                       cout << "Result = " << ENumber(b, a);
        }
	else
		cout << "Unacceptable character.Enter 'e' or 'o'.";
	return 0;
}


