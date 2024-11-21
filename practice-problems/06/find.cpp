/* TODO: write your own version of the "find" function, which takes two
 * strings, and searches for the second one in the first.  If a match is
 * found, you should return the index where the match begins in the first
 * string.  If no match is found, you can return the index -1 (which is
 * also known as string::npos). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */
int Find(string& base, string& sub)
{
	int index = -1;
	int subIndex = 0;

	for (int i = 0; i < base.length(); i++)
	{
		if ((base[i] == sub[0]) && (base.length()-i >= sub.length()))
		{
			index = i;

			for (int j = i; j < sub.length(); j++)
			{
				if (base[i] != sub[subIndex])
				{
					index = -1;
				}
				subIndex++;
			}
		}
	}
	return index;
}


int main()
{
	/* TODO: call your function, make sure it works... */
	string base;
	string sub;

	cout << "Enter your Base String: ";
	cin  >> base;

	cout << "Enter your Sub String: ";
	cin >>sub;

	cout << "Index is: " << Find(base, sub) << endl;
	return 0;
}

// vim:foldlevel=2
