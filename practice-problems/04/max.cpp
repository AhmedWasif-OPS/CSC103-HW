/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* your answer goes here... */
int Max(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else if (y > z)
	{
		return y;
	}
	else
	{
		return z;
	}

	return z;
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	// TODO: call your function, make sure it works...
	cout <<  "MAX: " << Max(x, y, z) << endl;
	return 0;
}

// vim:foldlevel=2
