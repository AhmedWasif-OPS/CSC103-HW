/* TODO: write a function which takes a string and returns a boolean indicating
 * whether or not the string was a palindrome.  (Palindromes are strings that
 * do not change when reversed). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */

bool palindrome(string word)
{
	bool result = true;
	int strlen = word.length();
	int j = strlen - 1;

	for (int i = 0; i < strlen/2; i++)
	{
		if (word[i] != word[j])
		{
			result = false;
		}

		j--;
	}

	return result;
}

int main()
{
	/* TODO: call your function, make sure it works... */

	string word;

	cout << "Enter Word: ";
	cin >> word;

	cout << palindrome(word) << endl;

	return 0;
}

// vim:foldlevel=2