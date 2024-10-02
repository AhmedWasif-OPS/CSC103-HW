/* TODO: write a program that will read an integer n from standard input and
 * then print the sum of the first n squares.  That is:
 * 1^2 + 2^2 + 3^2 + ... + n^2.
 * NOTE: The '^' operator in C++ is NOT exponentiation!  To square x, just
 * use x*x instead.
 * Bonus question: compute the sum of the first n *odd* squares.  That is,
 * 1^2 + 3^2 + 5^2 + ... + (2n-1)^2
 * */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/* your answer goes here... */

 int n;
 int sum = 0;
 int oddsum = 0;

 cout << "Enter a value for n: ";
 cin >> n;

 for (int i = 0; i <= n; i++)
 {
  sum += (i*i);

  if (i%2 != 0)
  {
   oddsum += (i*i);
  }

 }

 cout << "The sum is: " << sum << endl;
 cout << "The odd sum is: " << oddsum << endl;


	return 0;
}

// vim:foldlevel=2
