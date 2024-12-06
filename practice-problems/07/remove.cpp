/* TODO: write a function that takes an integer and a list, and removes
 * the first occurrence of the integer, if found.  Return value should be
 * whether or not removal happened. */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

bool remove(node*& L, int x)
{
	/* TODO: write me */
	bool result = false;

	for (node* p = L; p != NULL; p = p->next)
	{

		if (L->data == x)
		{
			L = L->next;
			result = true;
		}

		if (p->next != NULL && p->next->data == x)
		{
			node* nextNode = p->next;
			p->next = nextNode->next;
			result = true;
		}

	}

	return result; /* just so it compiles... */
}

int main()
{
	/* NOTE: some test code for you is given below.  It reads integers
	 * from stdin and tries to remove them from a hard-coded list. */
	node* L = buildlist({1,3,5,7,9,11,13});
	printlist(L);
	int x;
	while (cin >> x) {
		printf("%i was %sremoved\n",x,remove(L,x)?"":"not ");
		printf("new list contains:\n");
		printlist(L);
	}
	return 0;
}

// vim:foldlevel=2
