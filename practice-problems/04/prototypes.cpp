/* Function *prototypes* might seem unnecessary -- after all, as long as you
 * place the function earlier in your file than the places you use it, it'll
 * compile just fine.
 * TODO: come up with a situation where at least one function prototype is
 * *strictly necessary*.  Write functions which demonstrate your idea and
 * make sure what you wrote actually compiles (and will not compile without
 * any function prototypes).
 * BTW, if you need a reminder about prototypes, read here:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/lingo.html#function-prototype
 * or here:
 * http://www.charlesli.org/pic10a/lectures/lecture8/index.html
 * */

/* your answer goes here... */

/* If 2 functions require each other to be called, then you would need to use a prototype to make sure the program compiles*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool Foo(int n);
bool Bar(int n);

bool Foo(int n)
{
 if (n == 0) return true;

 return Bar(n-1);
}

bool Bar(int n)
{
 if (n == 0) return true;

 return Foo(n-1);
}


int main()
{

 cout << Foo(3) << endl;

	return 0;
}

// vim:foldlevel=2
