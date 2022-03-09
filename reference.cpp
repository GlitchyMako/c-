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

	cout << endl;

	int b = 5;

	int& ref_to_b = b;

	int* pointerto_b = &b;

	cout << "the value of b is: " << b << endl;
	cout << "the value of pointerto_b is: " << *pointerto_b << endl;

	cout << "this refers to the memory adress of b is: " << b << endl;
	cout << "this refers to b is: " << ref_to_b << endl;

	cout << endl;

	cout << "this refers to memory adress of ref to b is: " << &ref_to_b << endl;
	cout << "this refers to b is: " << &b << endl;
}