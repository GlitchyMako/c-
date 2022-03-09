#include <iostream>
#include <string>

using namespace std;

void SomeFunction()
{
		std::cout << "Printed from function" << endl;
}
int main()
{
	for(int i = 0; i < 5; i++){
		SomeFunction(); // std::cout << "Printed from function"<< endl;
	}

	int i = 0;

	while (i++ < 10)
	{
		std::cout << "this function prints this : " << i << endl;
	}
	
}