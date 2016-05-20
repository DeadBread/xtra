#include <iostream>
#include <stdio.h>

using namespace std;

char c;

void A();
void D();
void B();
void K();
void S();
void Start()
{
  S();
  if (c == '\n')
    {
      cout <<  "OK" <<  endl;
    }
  else
    throw(c);
}

void S()
{
	if (c == 'g')
	{
		c = getchar();
		A();
		S();
		if (c == 'f')
		{
			c = getchar();
		}
		else 
		{
			throw(c);
		}
	}
}

void A()
{
	if (c == 'f')
	{
		c = getchar();
		B();
	}
	else if (c == 'g')
	{
		c = getchar();
		D();
	}
	else
	{
		throw (c);
	}
}

void D()
{
	if (c == 'a')
	{
		c = getchar();
		D();
	}
	else if (c == 'b')
	{
		c = getchar();
		D();
	}
}

void B()
{
	if (c == 'b')
	{
		c = getchar();
		K();
	}
	else if (c == 'a')
	{
		c = getchar();
		D();
	}
}

void K()
{
	if (c == 'c')
	{
		c = getchar();
		B();
	}
	else if (c == 'a')
	{
		c = getchar();
		D();
	}
	else if (c == 'b')
	{
		c = getchar();
		D();
	}
}

int main()
{
	c = getchar();

	try
	{
		Start();
	}
	catch(char t)
	{
		cout << "error on char " << t << endl;
	}

	return 0;
}
