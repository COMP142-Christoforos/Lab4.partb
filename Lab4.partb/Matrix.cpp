/** \file Matrix.cpp
*\bried Headers file from small mattrix library
*\Athur Christoforos Chari
*\Date 08/04/2022
*/
#include"Matrix.h"
#include<iostream>
#include<cassert>
#include<cstdlib>
#include<ctime>

using namespace std;




/** Fuction <code>printMatrix</code>show the content of the matrix
*<BR>
*@param mat the matrix
*@param maxRow the number of rows in the matrix
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {

    assert(maxRow > 0);
    for (int i = 0; i < maxRow; i++) {
        for (int j = 0; j < MAX_COL; j++) {

            cout << mat[i][j] << "\t";
        }

    }
}

/** Fuction <code>sumOfRow</code>show the sum of the row.
*<BR>
*@param mat the matrix.
*@param row the number of row.
*@param maxRow the number of rows in the matrix.
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
    assert(row >= 0 && row < maxRow);
    double sum = 0.0;
    for (int i = 0; i < maxRow; i++) {
        sum += mat[row][i];
    }
    cout << "Sum of Row = " << sum;
    return sum;
}

/** Fuction <code>sumOfCol</code>show the sum of the column.
*<BR>
*@param mat the matrix.
*@param column the number of column.
*@param maxRow the number of rows in the matrix.
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow)
{
    assert(column >= 0 && column < MAX_COL);
    double sum = 0.0;
    for (int i = 0; i < maxRow; i++) {
        sum += mat[i][column];
    }
    cout << "Sum of Column = " << sum;
    return sum;
}

/** Fuction <code>fillWithRandomNum</code>show the randmo matrix.
*<BR>
*@param mat the matrix.
*@param maxRow the number of rows in the matrix.
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
    assert(maxRow > 0);
    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j) {
            mat[i][j] = rand() % 49;// range 0-50.

        }
    }
}

/**
 * The <code>sumOfRows</code> function sums up the values of all the rows and
 * return this as a single dimention array.
 * NOTE: return value is dynamically allocated caller must delete it.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns a single dimention array of size <code>maxRow</code>,
 * which MUST be deleted by the caller.
 */
double* sumOfRows(const double mat[][MAX_COL], const int maxRow) {
    double* retValues;

    retValues = new double[maxRow] {0};
    assert(retValues >= 0);
    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j)
            retValues[i] += mat[i][j];
    }

    return retValues;
}

/**
 * The <code>isIdentityMatrix</code> function checks if the matrix is an
 * identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns <code>true</code> if this is an identity matrix.
 */
bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow) {
    if (MAX_COL != maxRow)
        return false; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < maxRow; ++j) {
            if (i == j && mat[i][j] != 1)
                return false;
            else if (i != j && mat[i][j] != 0)
                return false;
        }
    }
    return true;
}

/**
 * The <code>makeIdentityMatrix</code> function makes the argument matrix into an
 * identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns <code>false</code> if this is not a square matrix.
 */
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow) {
    if (MAX_COL != maxRow)
        return false; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < maxRow; ++j) {
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    return true;
}