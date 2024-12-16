/* TODO: write a *recursive* function that takes an integer n and
 * prints the base 10 digits of n "vertically" to stdout.  E.g., if
 * n = 2371, output would be
 * 2
 * 3
 * 7
 * 1
 * */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void vprint(int n)
{
	if (n < 10)
	{
		cout << n << endl;
	}
	else
	{
		vprint(n/10);
		cout << n%10 << endl;
	}
}

int main()
{
	/* TODO: write some code here in main to test your function. */
	int input;

	cout << "Enter a value: ";
	cin >> input;

	vprint(input);

	return 0;
}

// vim:foldlevel=2
