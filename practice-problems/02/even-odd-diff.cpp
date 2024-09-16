/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two different sums?
 * Bonus question (might be non-obvious): can you do this without any if statements?
 * Bonus question (hard): can you do this without any if statements, nor any ?: operator? */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{
	/* your answer goes here... */
  int sums = 0;
  int curNum;

 while (cin >> curNum)
 {
  if ((curNum % 2) != 0)
  {
   sums -= curNum;
  } else
  {
   sums += curNum;
  }
 }

  cout << "The difference is: " << (sums) << endl;
	return 0;
}

// vim:foldlevel=2
