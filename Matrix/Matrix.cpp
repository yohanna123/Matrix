// Matrix.cpp : Defines the entry point for the application.
//

#include "Matrix.h"

Matrix::Matrix(uint rows, uint cols)
{
	num_rows = rows; //test test 123
	num_cols = cols;
	matrix = new double* [rows]; //matrix is a pointer that points to the amout of memory held by  rows
	//new allocates amt of memory to reserve
	new double matrix[rows][cols]; //can we write the above like this instead?
	for (uint i = 0; i < cols; ++i)
	{
		matrix[i] = new double[cols];
	}
}

Matrix::Matrix(const i_list & list)
{

}

Matrix::Matrix(const Matrix & m)
{

}

Matrix::~Matrix()
{
	for (uint i = 0; i < num_cols; ++i)
	{
		delete [] matrix[i]; // returns memory to the free store
	}
	delete [] matrix;
}

/*Matrix Matrix::add(double s) const
{
	
}

Matrix Matrix::add(const Matrix & m) const
{

}

Matrix Matrix::subtract(double s) const
{

}

Matrix Matrix::subtract(const Matrix & m) const
{

}

Matrix Matrix::multiply(double s) const
{

}

Matrix Matrix::multiply(const Matrix & m) const
{

}

Matrix Matrix::divide(double s) const
{

}

Matrix Matrix::t() const
{

}*/

const uint Matrix::numRows() const
{
	return num_rows;
}

const uint Matrix::numCols() const
{
	return num_cols;
}

double & Matrix::at(uint row, uint col)
{
	return matrix[row][col];
}

/*const double & Matrix::at(uint row, uint col) const
{

}*/
