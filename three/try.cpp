#include <iostream>

using namespace std;

char c;

void A();
void B();

void S()
{
	if (c == 'a')
	{
		cin >> c;
		A();
		if (c == 'd')
		{
			cin >> c;
			if (c != '/')
				throw(c);
			else 
				cout << "Ok!" << endl;
		}
		else
			throw(c);
	}
	else
		throw(c);
}

void A()
{
	if (c == 'c')
	{
		cin >> c;
		A();
		B();
	}
	else if (c == 'f')	
	{
		cin >> c;
	}
	else
		throw c;
}

void B()
{
	if (c == 'b')
	{
		cout << "here" << endl;
		cin >> c;
		B();
	}
	else if (c == 'f')
		cin >> c;
	else
		throw c;

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

