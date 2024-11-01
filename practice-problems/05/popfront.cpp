/* TODO: write a function called "pop_front" which will remove the first
 * element of a vector.  NOTE: unlike pop_back, which is a *member function*
 * of the vector, your function will take a vector parameter.  So instead of
 * calling V.pop_front(), you would do pop_front(V).  Use the function header
 * given below. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;


/* your answer goes here: */
void pop_front(vector<int>& V)
{
 vector<int> temp;

 for (size_t i = 1; i < V.size(); i++)
 {
  temp.push_back(V[i]);
 }

 V = temp;
}

int main()
{
	/* TODO: call your function, make sure it works... */

 vector<int> test = {1, 2, 3, 4, 5, 6, 7};

 cout << "Vector before Function: " << endl;

 for (size_t j = 0; j < test.size(); j++)
 {
  cout << test[j] << endl;
 }


 cout << "Vector after Function: " << endl;
 pop_front(test);

 for (size_t j = 0; j < test.size(); j++)
 {
  cout << test[j] << endl;
 }

 return 0;
}

// vim:foldlevel=2
