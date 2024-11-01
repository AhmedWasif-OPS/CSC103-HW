/* TODO: write a function which takes two vectors of integers V1 and V2,
 * *which you assume will be SORTED*.  (That is, i<=j ==> V1[i]<=V1[j], and
 * similarly for V2).  The function should merge these two vectors into a
 * third vector which is also sorted.
 * NOTE: do NOT do this by just adding all elements into the 3rd vector and
 * then sorting that.  You can do this much more efficiently since the input
 * vectors are sorted already.  Your function should take a number of steps
 * proportional to the sum of the sizes of V1 and V2.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */

void Merge(vector<int> V1, vector<int> V2, vector<int>& V3)
{
 size_t i1 = 0, i2 = 0;

 while(i1 < V1.size() && i2 < V2.size())
 {
  if (V1[i1] < V2[i2])
  {
   V3.push_back(V1[i1++]);
  }
  else if (V2[i2] < V1[i1])
  {
   V3.push_back(V2[i2++]);
  }
 }

 while (i1 < V1.size()) V3.push_back(V1[i1++]);
 while (i2 < V2.size()) V3.push_back(V2[i2++]);
}

int main()
{
	/* TODO: call your function, make sure it works... */
 vector<int> V1 = {1, 3, 3, 5, 7, 9};
 vector<int> V2 = {2, 4, 6, 8};

 vector<int> result;

 Merge(V1, V2, result);

 cout << "Merged List Elements: " << endl;

 for (size_t i = 0; i < result.size(); i++)
 {
  cout << result[i] << endl;
 }

	return 0;
}

// vim:foldlevel=2
