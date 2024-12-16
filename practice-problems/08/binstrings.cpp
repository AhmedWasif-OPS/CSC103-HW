/* TODO: write a function (recursion isn't a bad idea) which takes an integer
 * n and returns a vector of all binary strings of length n.
 * E.g., if n = 3, output vector should contain the following strings:
 * 000
 * 001
 * 010
 * 011
 * 100
 * 101
 * 110
 * 111
 * */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;


void rBin(int n, string curr, vector<string>& result)
{
	if (n == 0)
	{
		result.push_back(curr);
		return;
	}

	rBin(n-1, curr + "0", result);
	rBin(n-1, curr + "1", result);
}

vector<string> binstring(int n)
{
	vector<string> result;
	rBin(n, "", result);

	return result;
}

int main()
{
	/* TODO: write some test code here */
	int input;
	vector<string> output;

	cout << "Enter an Int: ";
	cin >> input;

	output = binstring(input);

	for (string s : output)
	{
		cout << s << endl;
	}


	return 0;
}

// vim:foldlevel=2
