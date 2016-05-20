#include <iostream>

using namespace std;

char c;

void A();
void K();
void B();
void T();
void M();
void N();
void D();

void S()
{
	if (c == 'g')
	{
		cin >> c;
		A();
		S();
		if (c == 'f')
		{
			cin >> c;
			if (c == '/')
				cout << "OK" << endl;
			else
				throw(c);
		}
		else 
			throw(c);
	}
	// else 
	// 	cin >> c;
}

void A()
{
	if (c == 'f')
	{
		cin >> c;
		if (c == 'b')
		{
			cin >> c;
			K();
		}
		else 
			throw (c);
	}
	else if (c == 'g')
	{
		cin >> c;
		T();
	}
	else
		throw(c);
}

void K()
{
	if (c == 'c')
	{
		cin >> c;
		B();
	}
	else if (c == 'b')
	{
		cin >> c;
		M();
	}
	else
		cin >> c;
}

void B()
{
	if (c == 'b')
	{
		cin >> c;
		D();
	}
	else
		cin >> c;
}

void T()
{
	if (c == 'a')
	{
		cin >> c;
		M();
	}
	else if (c == 'b')
	{
		cin >> c;
		N();
	}
	else
		throw(c);
}

void M()
{
	if (c == 'a')
	{
		cin >> c;
		M();
	}
	else 
		cin >> c;
}

void N()
{
	if (c == 'b')
	{
		cin >> c;
		N();
	}
	else
		cin >> c;
}

void D()
{
	if (c == 'c')
	{
		cin >> c;
		B();
	}
	else if (c == 'b')
	{
		cin >> c;
		N();
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

