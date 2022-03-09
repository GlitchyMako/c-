#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <iterator>
#include <stdio.h>

using namespace std;
// the end of the array is always size -1
int main()
{
	int a[10] = {2, 3, 66, 78, 12, 53, 45, 62, 12, 123};
	
	for (int i = 0; (i < size(a)); i++) { // for array of numbers
		std::cout << "the name of my employee is : " << a[i] << endl;
	}

	string names[4] = {"vi", "nuno", "ricardo", "fred"};

	for (int i = 0; i < size(names); i++) { //for string of names
		std::cout << "the name of my employee is : " << names[i] << endl;
	}
	return 0;
}