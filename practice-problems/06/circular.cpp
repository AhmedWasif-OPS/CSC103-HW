/* TODO: write a function that takes a string s and an integer n and circularly
 * shifts the string's characters to the right by n positions.  For example,
 * the string "Halloween" shifted by 3 would become "eenHallow".
 * NOTE: you can assume the integer is non-negative.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */

void circular(string& base, int n)
{
	string saved;

	for (int i = base.length(); i >= 0; i--)
	{
		if (i >= base.length() - n)
		{
			saved += base[i];
		}
		else
		{
			base[i+n] = base[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		base[i] = saved[n-i];
	}
}

int main()
{
	/* TODO: call your function, make sure it works... */
	string input;
	int n;

	cout << "Enter a String: ";
	cin >> input;

	cout << "Enter an Int: ";
	cin >> n;

	circular(input, n);

	cout << "Result: " << input << endl;

	return 0;
}

// vim:foldlevel=2
