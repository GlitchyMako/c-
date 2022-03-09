#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> marks = {50, 45, 47, 65, 80}; // inicializa vector com data type, e atribui valors
    marks.at(2) = 74; // atribuimos o valor 74 á segunda posição do vector
    for(int i = 0; i < marks.size() ; i++)
    {
        cout << "marks[" << i << "] = " << marks.at(i) << endl;
    }
    // return 0;
	cout << "\n";
	std::vector<int> mark = {2, 3, 66, 78, 12, 53, 45, 62, 12, 123};
	
	for (int i = 0; i < mark.size(); i++) { // for array of numbers
		cout << "the name of my employee is : " << mark[i] << endl;
	}

	// initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};

  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};

  // method 3
  // 5 = size of vector && 12 is the output
  vector<int> vector3(5, 12);
	cout << "\n";
  cout << "vector1 = ";

  // ranged loop
  for (const int& i : vector1) {
    cout << i << "  ";
  }
	cout << "\n";
  cout << "\nvector2 = ";

  // ranged loop
  for (const int& i : vector2) {
    cout << i << "  ";
  }
	cout << "\n";
  cout << "\nvector3 = ";

  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  }
	cout << "\n";
  vector<int> num {1, 2, 3, 4, 5};

  cout << "\nInitial Vector: ";

  for (const int& i : num) {
	  cout << i << "  ";
  }

  // add the integers 6 and 7 to the vector
  num.push_back(6);
  num.push_back(7);

  cout << "\nUpdated vector: ";

  for (const int& i : num) {
	  cout << i << "  ";
  }
 //num.at access a specific element in the vector
  	cout << "\n" << endl;
  cout << "Element at Index 0: " << num.at(0) << endl;
  cout << "Element at Index 2: " << num.at(2) << endl;
  cout << "Element at Index 4: " << num.at(4) << endl;
	cout << "\n";
  vector<int> troca {1, 2, 3, 4, 5};

  cout << "Initial vector: ";

  for (const int& i : troca) {
	  cout << i << "  ";
  }

  //change elements at indexes 1 & 4
  troca.at(1) = 9;
  troca.at(4) = 7;
  troca.capacity();

  cout << "\nUpdated Vector: ";
  for (const int& i : troca) {
	  cout << i << "  ";
  }

  return 0;
}