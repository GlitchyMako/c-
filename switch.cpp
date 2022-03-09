#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 5;

	switch (a)
	{
		case 1:
			std::cout << "the out is 1" << endl;
			break;
		
		case 2:
			std::cout << "the out is 2" << endl ;
			break;
		case 4:
			std::cout << "the out is 4" << endl ;
			break;
		case 5:
			std::cout << "the out \n is 5" << endl;
			break;
	
		default:
		std::cout << "this was executed to others not being true" ;
			break;
	}
}