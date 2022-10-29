#include <iostream>
#include <array>
using namespace std; 
#include "Ex1.h"


class Ex1
{
private:
	std::array<int, 6> myArray;

public:
	Ex1();
	void showArray();
	
};

Ex1::Ex1 ()
{
	
}


void Ex1::showArray()
{
	for (int i = 0; i < myArray.size; i++)
	{
		cout << myArray[i] << endl;
	}
}

int main()

{
	Ex1 e;

	e.showArray(2);


	return 0;
}