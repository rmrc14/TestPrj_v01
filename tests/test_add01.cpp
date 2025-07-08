#include<iostream>

#include "simplecalc.h"

using namespace std;

int main()
{

	cout << "Running the test cases \n";
	if (add(2, 3) != 5)
	{
		cerr << " failed the test case \n";
		return 1;
	}
	cout << " ended the test\n";

		return 0;
}