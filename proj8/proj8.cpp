//test driver proj8

#include <cstdlib>
#include <iostream>
#include "DataType.h"
#include "ArrayList.h"
#include "NodeList.h"

int main() {
	
	DataType data1(1, 2.0);
	
	cout << "Test Driver" << endl;
	
	cout << "Array List Testing" << endl;
	
	cout << "Default Constructor" << endl;
	
	ArrayList normal;
	
	cout << "Parameterized Constructor" << endl;
	
	ArrayList parameter (5, data1);
	
	cout << "Copy Constructor" << endl;
	
	ArrayList copy (parameter);
	
	cout << "Dtor" << endl;
	
	return 0;
}
	
	