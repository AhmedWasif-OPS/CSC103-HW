#include <iostream>
using std::cin;
using std::cout;
using std::endl;


/* TODO: read two integers n,m and draw (using some for loops) a
 * rectangle of '*' characters that is nxm.  E.g. if n = 3, m = 4
 * then output would be like this: */
// * * * *
// * * * *
// * * * *

int main()
{
 int n, m;

 cout << "Enter value for n: ";
 cin >> n;

 cout << "Enter value for m: ";
 cin >> m;

 cout << endl;

 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   if (i == 0 || i == (n-1) || j == 0 || j == (m-1))
   {
    cout << "* ";
   }
   else
   {
    cout << "  ";
   }
  }

  cout << endl;
 }

 cout << endl;


	return 0;
}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
