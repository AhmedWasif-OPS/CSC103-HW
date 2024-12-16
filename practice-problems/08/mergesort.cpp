/* TODO: Try to write merge sort!  Prototypes are given below using vectors,
 * but if you would prefer, arrays are fine too. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

/* This should take two SORTED vectors, L and R, and return another vector
 * which is sorted and contains all values from L and R. */
vector<int> merge(const vector<int>& L, const vector<int>& R)
{
	size_t indexL = 0, indexR = 0, indexZ = 0;

	vector<int> result;

	while (indexL < L.size() && indexR < R.size())
	{
		if (L[indexL] < R[indexR])
			result[indexZ++] = L[indexL++];
		else
			result[indexZ++] = R[indexR++];
	}

	while(indexL < L.size()) result[indexZ++] = L[indexL++];
	while(indexL < R.size()) result[indexZ++] = R[indexR++];

	return result;
}

int Partition(vector<int>& V, size_t lo, size_t hi)
{
 int pivot = V[lo];
 int k = hi;

 for (size_t i = hi; i > lo; i--)
 {
  if (V[i] > pivot)
  {
   int temp;
   temp = V[k];

   V[k] = V[i];
   V[i] = temp;

   k--;
  }
 }

 int temp;
 temp = V[k];

 V[k] = V[lo];
 V[lo] = temp;

 return k;
}

void mergeSort(vector<int>& V, size_t lo, size_t hi)
{
	if (lo < hi)
	{
		int pIndex = Partition(V, lo, hi);
		mergeSort(V, lo, pIndex-1);
		mergeSort(V, pIndex+1, hi);
	}
}

int main()
{
	/* TODO: write some code here in main to test your function. */

	vector<int> test = {5, 6, 7, 2, 3, 1, 4};

	mergeSort(test, 0, test.size()-1);

	cout << "{ ";

	for (int val : test)
	{
		cout << val << " ";
	}

	cout << "}" << endl;

	return 0;
}

// vim:foldlevel=2
