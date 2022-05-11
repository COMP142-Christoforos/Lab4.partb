/** \file Matrix.cpp
*\bried Headers file from small mattrix library
*\Athur Christoforos Chari
*\Date 08/04/2022
*/
#include"Matrix.h"
#include<iostream>
#include<cassert>

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