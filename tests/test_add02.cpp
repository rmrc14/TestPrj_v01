#include<iostream>

#include "simplecalc.h"

using namespace std;

int main()
{

	cout << "Running the test cases \n";
	if (add(4, 3) != 7)
	{
		cerr << " failed the test case \n";
	}
	cout << " ended the test\n";

	return 0;
}