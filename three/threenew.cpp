#include <iostream>

using namespace std;

char c;

void A();
void D();
void B();
void K();

void S()
{

	if (c == 'g')
	{
		cout << "call S in g" << endl;
		cin >> c;
		A();
		S();
		cout << "after S c = " << c << endl;
		if (c == 'f')
		{
			cin >> c;
			if (c == '/')
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "in S" << endl;
				throw(c);	
			}
		}
		else 
		{
			cout << "out S" << endl;
			throw(c);
		}
	}
	//else
	//	cin >> c;
}

void A()
{
	if (c == 'f')
	{
		cin >> c;
		B();
	}
	else if (c == 'g')
	{
		cin >> c;
		D();
	}
	else
	{
		cout << "in A" << endl;
		throw (c);
	}
}

void D()
{
	if (c == 'a')
	{
		cin >> c;
		D();
	}
	else if (c == 'b')
	{
		cin >> c;
		D();
	}
}

void B()
{
	if (c == 'b')
	{
		cin >> c;
		K();
	}
	else if (c == 'a')
	{
		cin >> c;
		D();
	}
}

void K()
{
	if (c == 'c')
	{
		cin >> c;
		B();
	}
	else if (c == 'a')
	{
		cin >> c;
		D();
	}
	else if (c == 'b')
	{
		cin >> c;
		D();
	}
}

int main()
{
	cin >> c;

	try
	{
		S();
	}
	catch(char t)
	{
		cout << "error on char " << t << endl;
	}

	return 0;
}