/* TODO: write a function which takes a vector of integers V (by reference)
 * and reverses its contents.  That is, if V = 1 2 3, then after calling
 * reverse(V), it would contain 3 2 1.  NOTE: the goal is not to print
 * anything, but to rearrange the vector elements in memory. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */

void Reverse(vector<int>& V)
{
 vector<int> temp;

 for (int i = V.size()-1; i >= 0; i--)
 {
  temp.push_back(V[i]);
 }

 V = temp;
}

int main()
{
	/* TODO: call your function, make sure it works... */

 vector<int> test = {1, 2, 3, 4, 5};

 cout << "Before Function: " << endl;

 for (size_t j = 0; j < test.size(); j++)
 {
  cout << test[j] << endl;
 }

 cout << "After Function: " << endl;

 Reverse(test);

 for (size_t j = 0; j < test.size(); j++)
 {
  cout << test[j] << endl;
 }

	return 0;
}

// vim:foldlevel=2
