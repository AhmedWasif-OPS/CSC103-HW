/* TODO: write a program to test the collatz conjecture.  This conjecture
 * considers the following process:
 * Start with any (positive) integer n and then transform it as follows:
 * -- if n == 1, stop
 * -- if n is even, divide it by 2 (n --> n/2)
 * -- if n is odd, multiply b 3 and add 1 (n --> 3n+1)
 * Conjecture: this process always stops after a finite number of steps,
 * no matter what value of n you start with.
 *
 * Your program should work as follows:
 * 1. read an integer
 * 2. see how many steps the above process takes before you hit 1
 * 3. print # of steps
 * 4. go back to (1) until stdin has no more integers to read.
 * */


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/* your answer goes here... */
 int n;
 int steps = 0;

 cout << "Enter an Integer: ";
 cin >> n;

 while (n != 1)
 {
  if (n%2 == 0)
  {
   n/=2;
   steps++;
  }
  else
  {
   n = 3*n + 1;
   steps++;
  }
 }

 cout << "Number of Steps: " << steps << endl;

 return 0;
}

// vim:foldlevel=2
