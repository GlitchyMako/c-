#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <iterator>
#include <stdio.h>

using namespace std;

int main()
{
	int a = 5;

	int* pointertoa = &a;

	cout << "the value of a is: " << a << endl;

	cout << "the memory adress of a is: " << &a << endl;

	cout << endl;

	*pointertoa = 67;

	cout << "the value of a is: " << a << endl;

	cout << "the memory adress of a is: " << &a << endl;

	cout << endl;

	cout << "the value of pointertoa is: " << *pointertoa << endl;

	cout << "the memory adress of pointertoa is: " << pointertoa << endl;
}