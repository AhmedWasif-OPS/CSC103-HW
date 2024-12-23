/* TODO: Write a function that applies a random permutation to the string
 * given as input.  E.g., if the input string was s = "abcdefg", then after
 * calling this function on s, you might have s = "cafebdg" (same letters,
 * but in a random order).  You should try to make every permutation equally
 * likely to happen (assuming rand() were really random).  One easy strategy
 * is as follows, where n is the length of the string:
 * 1. Choose a random index i from 0..n-1 and swap s[i] <--> s[0].
 * 2. Choose another random index from 1..n-1, and swap s[i] <--> s[1].
 * 3. ...
 * If you think about it, every reordering will be equally likely.  Remember,
 * you can get random numbers using rand(), but you will have to think a tiny
 * bit to get the random indexes you want.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::rand;
/* your answer goes here... */

void randomperm(string& n)
{
	srand(time(0));

	for (int i = 0; i < n.length(); i++)
	{
		int randindex = rand() % (n.length());
		char temp;

		temp = n[randindex];
		n[randindex] = n[i];
		n[i] = temp;
	}
}

int main()
{
	/* TODO: call your function, make sure it works... */
	string input;

	cout << "Enter String: ";
	cin >> input;

	randomperm(input);

	cout << input << endl;

	return 0;
}

// vim:foldlevel=2
