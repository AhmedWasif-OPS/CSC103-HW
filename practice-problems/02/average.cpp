/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;



int main()
{
	/* your answer goes here... */
 int currNum;
 int count = 0;
 double average = 0;

 while (cin >> currNum)
 {
  average += currNum;
  count += 1;
 }

 cout << (average/count) << endl;
 cout << "count: " << count << endl;

	return 0;
}

// vim:foldlevel=2
