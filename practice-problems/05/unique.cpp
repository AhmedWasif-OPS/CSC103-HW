/* TODO: write a function which takes a *sorted* vector of integers V
 * (that is, i<=j ==> V[i]<=V[j]) and returns a vector of the unique
 * elements of V.  That is to say, all duplicates have been removed.
 * For example, if V = {1,2,2,3,3,3,4}, the resulting vector should
 * contain {1,2,3,4}.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */
vector<int> Unique(vector<int> V)
{
 vector<int> temp;
 temp.push_back(V[0]);

 for (size_t i = 1; i < V.size() - 1; i++)
 {
  if (V[i] != V[i+1])
  {
   temp.push_back(V[i]);
  }
 }

 if (V.back() != V[V.size()-2])
 {
  temp.push_back(V.back());
 }

 return temp;
}




void Unique2(vector<int>& V)
{
 int dupes = 0;

 for (size_t i = 1; i < V.size() - dupes; i++)
 {
  if (V[i] == V[i-1])
  {
   int store = V[i];

   for (size_t j = i-1; j < V.size() - 1; j++)
   {
    V[j] = V[j+1];
   }

   V[V.size()-1] = store;

   dupes++;
   i--;
  }
 }
 V.resize(V.size()-dupes);
}

int main()
{
	/* TODO: call your function, make sure it works... */

 vector<int> test = {1, 2, 2, 3, 3, 3, 3, 4};
 vector<int> result = Unique(test);

 vector<int> test2 = {1, 2, 2, 2, 2, 3, 3, 3, 3, 4};
 Unique2(test2);

 for (int val : test2)
 {
  cout << val << endl;
 }

	return 0;
}

/* TODO: bonus question: write another version of this function which
 * actually removes the duplicates from the input vector rather than
 * returning an altogether new vector.  NOTE: you could of course do
 * the same thing as before, and then overwrite your original vector,
 * but that's not what I want.  Don't allocate any other vectors, and
 * don't use the "erase" function either.  Just rearrange the elements
 * somehow and then call V.resize(...). */


// vim:foldlevel=2