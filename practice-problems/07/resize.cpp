/* TODO: write a function to resize a dynamically allocated array.
 * Prototype is given below.  Remember: the basic steps are as follows:
 * 1. Allocate a new chunk of memory of the desired size.
 * 2. Copy elements from the old array to the new one.
 * 3. Free the old one (delete).
 * 4. Redirect the pointer to the new array.
 * NOTE: your function should work even if newsize < oldsize.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* your answer goes here... */
void resize(int*& A, size_t oldsize, size_t newsize)
{
	int* temp = new int[newsize];

	size_t length = (oldsize < newsize) ? oldsize : newsize;

	for (size_t i = 0; i < length; i++)
	{
		temp[i] = A[i];
	}

	delete[] A;
	A = temp;
}

int main()
{
	/* TODO: use your resize function to read an arbitrary number of integers
	 * from stdin.  Each time you run out of space, double the array size. */
	int* test = new int[1];
	int n;

	size_t arrSize = 2;
	size_t count = 0;


	while (scanf("%d", &n) > 0)
	{
		if (count >= arrSize)
		{
			resize(test, arrSize, arrSize*2);
			arrSize *= 2;
		}

		test[count++] = n;
	}

	for (size_t i = 0; i < arrSize; i++)
		{
			cout << test[i] << " ";
		}

	cout << endl;

	return 0;
}

// vim:foldlevel=2
