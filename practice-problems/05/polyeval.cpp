/* TODO: Write a function that evaluates a polynomial at a given input.
 * To represent the polynomial, use a vector (say of integers) which will
 * correspond to the coefficients.  That is, if your polynomial is:
 * f(X) = C_0 + C_1*X + C_2*X^2 + ... + C_d*X^d
 * then f would be given as a vector C such that C[i] = C_i.
 * For your function, please use the prototype given below.
 * */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
#include <math.h>
using std::vector;
using std::endl;

int polyeval(const vector<int>& C, int x)
{

 int sum = 0;

 for (size_t i = 0; i < C.size(); i++)
 {
  sum += C[i] * ((int)pow(x, i));
 }

 return sum;
}


int main()
{
	/* TODO: once you have written polyeval, add some test code here */

 vector<int> test = {1, 2, 3, 4};
 int x = 2;

 // 1*2^0 + 2*2^1 + 3*2^2 + 4*2^3 = 17

 cout << polyeval(test, x) << endl;

	return 0;
}

// vim:foldlevel=2
