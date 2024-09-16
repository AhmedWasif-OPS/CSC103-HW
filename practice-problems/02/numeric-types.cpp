#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/* TODO: investigate the following questions (by writing a bit
	 * of code here and then compiling and running it):
	 * 1. What happens if you assign a floating point value to an
	 *    integer variable?
	 * 2. What about assigning an integer to floating point?  Can
	 *    you think of any way it could go wrong?  (Here, "wrong"
	 *    means "surprising" or unintuitive.)  Hint: read the
	 *    IEEE format and you'll see that you might have issues
	 *    with large integers.
	 * 3. What type of result do you get when adding or multiplying
	 *    floating point values with integers? */

	int x = 2.5;

	cout << x << " -initial test." << endl;
	cout << (2*x) << " -multiplying." << endl;
	cout << (2+x) << " -adding." << endl;

	return 0;
}

// vim:foldlevel=2

//Floating Point numbers usually get cut off before the decimal. For example, 2.5, becomes 2. This isn't an issue if there is a 0 after the decimal. But it may create some problems if there are significant digits.