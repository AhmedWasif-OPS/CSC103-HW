/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
#include <vector>
#include <limits.h>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	/* your answer goes here... */

 int small;
 int secsmall;
 int val;

 vector<int> input = {};

 cout << "Enter digits: " << endl;

 while (cin >> val)
 {
  input.push_back(val);
 }


 small = INT_MAX;
 secsmall = INT_MAX;

 for (size_t i = 0; i < input.size(); i++)
 {
  if (input[i] < small)
  {
   small = input[i];
  }
 }

 for (size_t j = 0; j < input.size(); j++)
 {
  if (input[j] < secsmall && input[j] > small)
  {
   secsmall = input[j];
  }
 }

 cout << "The second smallest value is: " << secsmall << endl;

	return 0;
}

// vim:foldlevel=2