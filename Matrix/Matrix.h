#ifndef MATRIX_H_
#define MATRIX_H_
#include <initializer_list>

typedef unsigned int uint;

typedef std::initializer_list<std::initializer_list<double>> i_list;

class Matrix {

public:

	Matrix(uint rows, uint cols); // constructor (all elements initialized to 0)

	Matrix(const i_list & list); // constructor (using initializer list)

	Matrix(const Matrix & m); // copy constructor

	~Matrix(); // destructor

	Matrix add(double s) const; // add scalar to this matrix

	Matrix add(const Matrix & m) const; // add this matrix and another matrix

	Matrix subtract(double s) const; // subtract scalar from this matrix

	Matrix subtract(const Matrix & m) const; // subtract another matrix from this matrix

	Matrix multiply(double s) const; // multiply this matrix by a scaler

	Matrix multiply(const Matrix & m) const; // multiply this matrix by another matrix

	Matrix divide(double s) const; // divide this matrix by a scaler

	Matrix t() const; // transpose of this matrix

	const uint numRows() const; // returns the number of rows

	const uint numCols() const; // returns the number of cols

	double & at(uint row, uint col); // get/set element at row,col

	const double & at(uint row, uint col) const; // get element at row,col (when using a const object)

private:
	double **matrix;
	uint num_rows, num_cols;

}; // Matrix

#endif // !MATRIX_H_