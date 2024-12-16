/* TODO: write a *recursive* function that takes two integers (a,b)
 * and computes a^b (a to the b power).  You can assume the exponent
 * b is nonnegative. */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int pow(int a, int b)
{
	if (b == 0) return 1;

	if (a == 0) return 0;

	return a * pow(a, b-1);
}

int main()
{
	/* TODO: write some code here in main to test your function. */
	int a;
	int b;

	cout << "Enter a base: ";
	cin >> a;

	cout << "Enter an exponent: ";
	cin >> b;

	cout << "Result: " << pow(a, b) << endl;

	return 0;
}

// vim:foldlevel=2