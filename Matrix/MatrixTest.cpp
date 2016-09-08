#include "Matrix.h"
#include <iostream>

int main()
{
	uint rows = 2;
	uint columns = 2;
	Matrix m(rows, columns);
	m.at(0, 0) = 14.0;
	std::cout << m.at(0, 0) << std::endl;
	return 0;
}