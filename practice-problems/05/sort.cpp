/* TODO: write a function which takes a vector of integers V and places
 * the elements in sorted order (that is, i<=j ==> V[i]<=V[j]).
 * NOTE: there is a simple solution in l3.pdf if you get stuck, but it's
 * a pretty good exercise if you work it out yourself. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */

void Sort(vector<int>& V, size_t lo, size_t hi);
int Partition(vector<int>& V, size_t lo, size_t hi);


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



void Sort(vector<int>& V, size_t lo, size_t hi)
{
 if (lo < hi)
 {
  int pIndex = Partition(V, lo, hi);
  Sort(V, lo, pIndex-1);
  Sort(V, pIndex+1, hi);
 }
}



int main()
{
	/* TODO: call your function, make sure it works... */

 vector<int> test = {5, 6, 7, 2, 3, 1, 4};

 Sort(test, 0, test.size()-1);

 cout << "{ ";

 for (int val : test)
 {
  cout << val << " ";
 }

 cout << "}" << endl;

 return 0;
}

// vim:foldlevel=2
