#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

int main()
{
	/* TODO: read integers from stdin and insert each one to the front
	 * of a linked list. */
	node* L = NULL;
	node* last = L;
	int n;

	while (scanf("%d",&n) > 0)
	{
		node* newNode = new node(n, NULL);

		if (L == NULL)
		{
			L = newNode;
			last = L;
		}

		last->next= newNode;
		last = newNode;

	}
	/* TODO: print the list back out so you know it worked. */

	cout << "{ ";

	for (node* p = L; p != NULL; p = p->next)
	{
		cout << p->data << " ";
	}

	cout << "}" << endl;

	return 0;
}

// vim:foldlevel=2
