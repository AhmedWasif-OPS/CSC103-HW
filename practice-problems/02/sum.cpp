/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/* your answer goes here... */

	int sum = 0;
	int recent;

	while (cin >> recent)
	{
		sum += recent;
	}

	cout << "Sum is: " << sum << endl;

	return 0;
}

// vim:foldlevel=2
