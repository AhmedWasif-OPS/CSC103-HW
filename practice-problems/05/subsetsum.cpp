/* TODO: write a function which takes a vector of integers V and a target
 * value t and returns true if and only if there are indexes i != j such
 * that V[i]+V[j] == t.  Bonus question: find a way find a way to modify
 * your function so that the caller can also see what values of i,j work
 * in the case where the return value is true.  The challenge is to figure
 * out how to give 3 outputs from a function instead of just one.
 * HINT: maybe think about value vs reference parameters...  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* your answer goes here... */
bool SubSetSum(vector<int> V, int t, vector<int>& I, vector<int>& J)
{
 bool result = false;

 for (size_t i = 0; i < V.size()-1; i++)
 {
  for (size_t j = i+1; j < V.size(); j++)
  {
   if (V[i]+V[j] == t)
   {
    result = true;
    I.push_back(V[i]);
    J.push_back(V[j]);
   }
  }
 }

 return result;
}


int main()
{
	/* TODO: call your function, make sure it works... */
 vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
 vector<int> Ival;
 vector<int> Jval;

 int x = 12;

 cout << "Found Sum?: " << SubSetSum(test, x, Ival, Jval) << endl;

 for (size_t k = 0; k < Ival.size(); k++)
 {
  cout << Ival[k];
  cout << ", " << Jval[k] << endl;
 }

 return 0;
}

// vim:foldlevel=2
