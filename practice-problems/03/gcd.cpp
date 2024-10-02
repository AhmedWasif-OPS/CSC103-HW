/* TODO: write a program that reads two integers and prints their greatest
 * common divisor.  E.g., if the two integers were 12 and 18, then your
 * program should print 6.  If the numbers were 12 and 19, it should print 1.
 * NOTE: there is a nice way to do this, known as the Euclidean Algorithm,
 * but my intention is for you to just "brute force" search for the gcd.  */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{
	/* your answer goes here... */
 int first;
 int second;
 int gcd = 0;

 int count;

 cout << "Enter first Integer: ";
 cin >> first;

 cout << "Enter second Integer: ";
 cin >> second;

 if (first > second)
 {
  count = second;
 }
 else
 {
  count = first;
 }


 for (int i = 1; i <= count; i++)
 {
  if ((first%i == 0) && (second%i == 0))
  {
   gcd = i;
  }
 }

 cout << "GCD is: " << gcd << endl;

	return 0;
}

// vim:foldlevel=2
