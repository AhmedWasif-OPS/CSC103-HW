/* TODO: write a function which takes two integer parameters and swaps
 * their contents.  That is, if for example x==0,y==1, then after calling
 * swap(x,y), it should be the case that x==1,y==0.  */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* your answer goes here... */
void Swap(int& x, int&y)
{
 int temp;
 temp = y;

 y = x;
 x = temp;

 return;
}

int main()
{
	/* TODO: write a little test here to make sure your function works. */
 int x;
 int y;

 cin >> x;
 cin >> y;

 Swap(x, y);

 cout << "x: " << x << endl;
 cout << "y: " << y << endl;

 return 0;
}

/* TODO: (bonus question) Can you rewrite your swap function so that it does
 * not use a temporary variable?  (Hint: use algebra/arithmetic...)  */

// vim:foldlevel=2
