/* TODO: write a function which takes a vector of integers V and an integer x
 * and returns a boolean indicating whether or not x was found in the elements
 * of V. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */

bool Search(vector<int> V, int x)
{
	for (size_t i = 0; i < V.size(); i++)
	{
		if (V[i] == x)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	/* TODO: call your function, make sure it works... */

	vector<int> Test = {1, 2, 3, 4, 5, 6, 7};
	int x;

	cout << "Enter an Integer: ";
	cin >> x;

	if (Search(Test, x) == 1)
	{
		cout << "Integer Found!" << endl;
	}
	else
	{
		cout << "Integer not Found!" << endl;
	}

	return 0;
}

// vim:foldlevel=2
