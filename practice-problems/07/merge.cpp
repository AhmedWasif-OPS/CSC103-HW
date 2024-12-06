/* TODO: Write a function that takes two pointers to linked lists
 * which you can assume are in SORTED ORDER already.  The function
 * should then build a new list which is also in sorted order and
 * return it.
 * Bonus problem: re-write your function (or make a new version)
 * which does NOT allocate any memory, and instead just re-uses the
 * nodes from the two input lists.  */
#include <iostream>
using std::cout;
using std::cin;
#include "list-utils.h"

node* merge(node* L1, node* L2)
{
	/* TODO: write me */
	node* copy = new node();

	node* curr = copy;

	while ((L1 != NULL) && (L2 != NULL))
	{
		if (L1->data < L2->data)
		{
			curr->next = L1;
			L1 = L1->next;
		}
		else
		{
			curr->next = L2;
			L2 = L2->next;
		}

		curr = curr->next;
	}

	curr->next = L1 ? L1 : L2;

	return copy->next; /* just so it compiles... */
}

int main()
{
	/* some test code for your function: */
	node* L1 = buildlist({1,5,7,11,13});
	node* L2 = buildlist({2,3,4,8});
	printlist(L1);
	printlist(L2);
	node* L = merge(L1,L2);
	printlist(L);
	return 0;
}

// vim:foldlevel=2
