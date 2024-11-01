/* TODO: write a function which takes a vector of integers V and an
 * integer d and returns another vector containing only the elements
 * of V which are divisible by d.  ("x is divisible by d" means that
 * there exists another integer q such that x == dq.  That is, when
 * you divide x by d, there's no remainder.) */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */

vector<int> Divisible(vector<int> V, int d)
{
 vector<int> result;

 for (size_t i = 0; i < V.size(); i++)
 {
  if (V[i]%d == 0)
  {
   result.push_back(V[i]);
  }
 }

 return result;
}

int main()
{
	/* TODO: call your function, make sure it works... */

 vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 10, 13};
 int d = 3;

 vector<int> result = Divisible(test, d);

 for (size_t j = 0; j < result.size(); j++)
 {
  cout << result[j] << endl;
 }

	return 0;
}

// vim:foldlevel=2
