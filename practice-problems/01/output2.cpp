#include <iostream>
using std::cout;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
	int i=5, j=6, k=7, n=3;
	cout << i + j * k - k % n << "\n";
	cout << i / n << "\n";
	return 0;
}

// vim:foldlevel=2


//MY ANSWER:
// 5+(6*7) - (7%3) -> 5+42-1 = (46)
// 5/3 = 2 r1 (Since they are 2 odd ints, c++ will just return 1) -> (1)