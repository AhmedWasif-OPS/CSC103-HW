/* TODO: write a function that takes a string and counts the words in
 * the string.  You can assume words are only delimited by whitespace
 * characters: ' ', '\t', '\n'.  NOTE: counting spaces does not suffice!
 * Your function should report 2 words for "hello world" or " hello world"
 * or "  hello     world   ". */
/* TODO: (Bonus question) Write another version of the above function which
 * instead of just returning the count of the words, returns a vector of
 * all the words read.  */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */

int main()
{
	/* TODO: call your function, make sure it works... */
	char c;
	int count = 0;
	bool readwhite = true;

	while (scanf("%c", &c) == 1)
	{
		if (readwhite)
		{
			if (c != ' ' || c != '\t' || c != '\n')
			{
				count++;
				readwhite = false;
			}
		}
		else
		{
			if (c == ' ' || c == '\t' || c == '\n')
			{
				readwhite = true;
			}
		}
	}

	cout << "Result: " << count << endl;

	return 0;
}

// vim:foldlevel=2
