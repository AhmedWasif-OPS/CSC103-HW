/* TODO: write a function which takes a *sorted* vector of integers V
 * and an integer x and performs a *binary search* for x.  The idea is
 * that since the vector is sorted, you can look at the middle element
 * and then rule out half of the vector from the search.  Just keep on
 * doing that until you find x or you run out of places to look. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */

int BinarySearch(vector<int> V, int x)
{
 int l = 0, h = V.size();

 while (l <= h)
 {
   int mid = l + (h-l)/2;

  if (x == V[mid]) return mid;

  if (x > V[mid])
  {
   l = mid + 1;
  }
  else
  {
   h = mid - 1;
  }

 }
 return -1;
}

int main()
{
	/* TODO: call your function, make sure it works... */

 vector<int> test = {2, 3, 10, 24, 40};
 int x = 24;

 cout << "Index: " << BinarySearch(test, x) << endl;

 return 0;
}

// vim:foldlevel=2
