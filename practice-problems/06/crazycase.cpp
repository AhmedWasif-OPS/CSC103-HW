/* TODO: Write a function called "crazycase" which takes a string (by
 * reference) and applies the following transformation: randomly toggle the
 * upper/lower caseness of the letters.  (It's sort of like "camelCase" for
 * variable names and "kebab-case" for naming your files, if you are familiar
 * with those.)   And for good measure, let's also change any periods "." to
 * exclamation marks "!".  For example,
 *
 * "Dragons are merely artifacts of the inane folklore of our ancestors."
 *
 * might become:
 *
 * "DRagonS arE MerELY ArTifACTs of THe iNaNe foLkLOrE Of OuR AnceStOrS!"
 *
 * Your function should randomly *toggle* the case, so even if the original was
 * all upper case, we might get the same result as above.
 * NOTE: you will want to get pseudorandom numbers for this.  The easy way is
 * to use the rand() function from the standard library.  Each time you call
 * rand() you will get a (pseudo)random number from 0..2^31-1.  Note also that
 * the lower case versions of each character are 32 away from the upper case
 * version (e.g., 'a' - 'A' == 'b' - 'B' ... == 32).
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::rand;
using std::getline;

/* your answer goes here... */

void crazycase(string& value)
{
	for (int i = 0; i < value.length(); i++)
	{
		char& curr = value[i];
		int randomizer = rand();

		if (randomizer%2 == 0)
		{
			if ((int)curr > 90)
			{
				curr -= 32;
			}
			else if ((int)curr > 64)
			{
				curr += 32;
			}
			else if ((int)curr == 46)
			{
				curr = 33;
			}
		}
	}
}


int main()
{
	/* TODO: call your function, make sure it works... */
	 string test;
	 cout << "Enter String: ";
	 getline(cin, test);

	 crazycase(test);

	 cout << test << endl;

	 return 0;
}

// vim:foldlevel=2
