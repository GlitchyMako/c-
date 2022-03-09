#include <iostream>
#include <string>
using namespace std;

int SubtractNumbers(int a, int b)
{
	int subtraction = a - b;

	return subtraction;

}
int main()
{
	float health = 100.f; 
	float damage = 5.f;

	float remaininghealth = health + damage;

	int a = 7;
	int b = 10;

	int subtraction = SubtractNumbers(25, 13);

	cout << "The current hp of mc is " << subtraction;
	return 0;
}