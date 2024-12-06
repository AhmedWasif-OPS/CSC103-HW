/* TODO: write a function to append a new node with a given value to
 * the end of a list.  NOTE: the return value should be a pointer to
 * the newly allocated node.  This will make it more efficient to
 * construct a list by appending over and over, since you don't have
 * to start from the beginning each time and find the end.  (Although
 * your function should work no matter what, and always find the end
 * of the list before appending).  */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "list-utils.h"

node* append(node*& L, int x)
{
	/* TODO: write me */
	node* curr = new node(x, NULL);
	L->next = curr;

	return curr;
}

int main()
{
	/* TODO: use your function to build a list from stdin by appending
	 * over and over. */
	int n;
	node* start = NULL;
	node* curr;

	while (scanf("%d", &n))
	{
		if (start != NULL)
		{
			curr = append(curr, n);
		}
		else
		{
			start = new node(n, NULL);
			curr = start;
		}
	}

	cout << "{ ";

	for (node* p = start; p != NULL; p = p->next)
	{
		cout << p->data << " ";
	}

	cout << "}" << endl;
	return 0;
}

// vim:foldlevel=2
