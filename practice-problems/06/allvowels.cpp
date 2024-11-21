/* TODO: Write a function that takes a string parameter, and returns a boolean
 * value indicating whether or not *all* vowels (a,e,i,o,u) are present
 * somewhere in the string.  For example, if the input is "hello world", the
 * return value should be false, and on input "programming is super fun!" the
 * return value should be true.
 * NOTE: to simplify things, you can assume the input string is all lower case.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;

/* your answer goes here... */

bool allvowels(string val)
{
	bool vowels[] = {0, 0, 0, 0, 0};
	bool result = true;

	for (char letter : val)
	{
		switch(letter)
		{
		case 'a':
			vowels[0] = true;
		break;
		case 'e':
			vowels[1] = true;
		break;
		case 'i':
			vowels[2] = true;
		break;
		case 'o':
			vowels[3] = true;
		break;
		case 'u':
			vowels[4] = true;
		break;
	}
}

 for (bool vowel : vowels)
	{
	 if (vowel == false)
		{
		 result = false;
		}
	}

 return result;
}


int main()
{
	/* TODO: call your function, make sure it works... */
	string input;
	cout << "Enter a String: ";
	getline(cin, input);

	cout << allvowels(input) << endl;
	return 0;
}

// vim:foldlevel=2
