/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints a string that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */

#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	/* your answer goes here... */

 int b;
 int n;
 int hPower = 0;
 int remainder = 0;

 cout << "Enter a base: ";
 cin >> b;

 cout << "Enter an integer: ";
 cin >> n;

 remainder = n%b;
 n -= remainder;

 do
 {
  hPower += 1;
 }
 while (pow(b, hPower + 1) < n);

 while (hPower > 0)
 {

  int i = 0;
  int divisor = pow(b, hPower);

  while (n - divisor >= 0)
  {
   i++;
   n -= divisor;
  }

  cout << i;
  hPower--;
 }

 cout << remainder << endl;
}



// vim:foldlevel=2
