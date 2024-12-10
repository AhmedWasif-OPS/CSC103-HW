/*
 * CSc103 Project 5: Sorting with lists
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 * geeksforgeeks.org/insertion-sort-algorithm
 *
 * Finally, please indicate approximately how many hours you spent on this:
 * #hours: 5
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <getopt.h> // to parse long arguments.
#include <string>
using std::string;

/* doubly linked list node: */
struct node {
	string data;
	node* prev;
	node* next;
	node(string s="", node* p=NULL, node* n=NULL) : data(s),prev(p),next(n) {}
};

//Function to append a node, so we don't have to continously traverse the list
node* append(node*& L, string x)
{
	/* TODO: write me */
	node* curr = new node(x, NULL);
	L->next = curr;
	curr->prev = L;

	return curr;
}

//Function that sorts a given list, then returns the end of the list
node* sort(node*& head)
{
	node* sorted = NULL;
	node* curr = head;

	while (curr != NULL)
	{
		node* next = curr-> next;

		if (sorted == NULL || sorted->data >= curr->data)
		{
			curr->next = sorted;

			if (sorted != NULL) sorted->prev = curr;

			sorted = curr;
			sorted->prev = NULL;
		}
		else
		{
			node* currSort = sorted;

			while(currSort->next != NULL && currSort->next->data < curr->data)
			{
				currSort = currSort->next;
			}

			curr->next = currSort->next;

			if (currSort->next != NULL) currSort->next->prev = curr;

			currSort->next = curr;
			curr->prev = currSort;
		}
		curr = next;
	}
	head = sorted;
	curr = head;

	while (curr->next!= NULL) curr = curr->next;

	return curr;
}

//Function that deletes duplicates in a list, then returns the end of the modified list
node* rcopy(node*& head)
{
	node* curr = head;

	while (curr != NULL && curr->next != NULL)
	{
		if (curr->data == curr->next->data)
		{
			node* n2 = curr->next->next;

			if (n2 != NULL)
			{
				n2->prev = curr;
			}

			curr->next = n2;
		}
		else
		{
			curr = curr->next;
		}
	}

	return curr;
}

int main(int argc, char *argv[]) {
	/* define long options */
	static int unique=0, reverse=0;
	static struct option long_opts[] = {
		{"unique",   no_argument,       &unique,   'u'},
		{"reverse",  no_argument,       &reverse,  'r'},
		{0,0,0,0} // this denotes the end of our options.
	};
	/* process options */
	char c; /* holds an option */
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "ur", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'u':
				unique = 1;
				break;
			case 'r':
				reverse = 1;
				break;
			case '?': /* this will catch unknown options. */
				return 1;
		}
	}
	/* NOTE: at this point, variables 'reverse' and 'unique' have been set
	 * according to the command line.  */
	/* TODO: finish writing this.  Maybe use while(getline(cin,line)) or
	 * similar to read all the lines from stdin. */
	node* start = NULL;
	node* end;
	string input;

	//Get each input and store it in a node
	while(getline(cin, input))
	{
		if (start == NULL)
		{
			start = new node(input);
			end = start;
		}
		else
		{
			end = append(end, input);
		}
	}

	//Sort and save the new end value
	end = sort(start);

	//If argument u is given, run the rcopy function and set end to the end of the modified list
	if (unique == 1) end = rcopy(start);

	//If argument r is given, use a for loop starting from the end, and traverse backwards to print, otherwise, traverse forwards
	if (reverse == 1)
	{
		for (node* p = end; p != NULL; p = p->prev)
		{
			cout << p->data << endl;
		}
	}
	else
	{
		for (node* p = start; p != NULL; p = p->next)
		{
			cout << p->data << endl;
		}
	}


	return 0;
}