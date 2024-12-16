/* TODO: write a recursive function to compute terms of the Fibonacci sequence,
 * but make it efficient (or at least, not terribly inefficient) by way of
 * "memoization".  That is, add some memory to your function, perhaps in the
 * form of a static variable of type vector<int>.  Then, before making any
 * recursive calls, check the vector to see if you haven't computed that term
 * before.  In case you need more to go on, the idea is that your vector (let's
 * call it A for "answers") should be such that if n < A.size(), then A[n]
 * is the n-th term in the sequence.  */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

static vector<size_t> memo(100);

size_t fibonacci(int n)
{
	if (n <= 1) return n;

	if (memo[n] != 0)
	{
		return memo[n];
	}
	else
	{
		memo[n] = fibonacci(n-1) + fibonacci(n-2);
		return memo[n];
	}
}

int main()
{
	/* TODO: write some code here in main to test your function.  Be sure to
	 * call it on inputs > 100 to check for efficiency (the naive solution would
	 * take a very long time on n=100). */
	int term;

	cout << "Enter an Int: ";
	cin >> term;

	cout << fibonacci(term) << endl;


	return 0;
}

// vim:foldlevel=2
