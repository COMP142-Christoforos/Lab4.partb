/** \file Lab4part2.cpp
*\bried Small program to set out a matrix library
*\Athur Christoforos Chari
*\Date: 08/04/2022
*/
#include <iostream>
#include"Matrix.h"

using namespace std;

/**
*The menu which calls the various mathrix fucthionality
*@return Returns 0
*/
int main()
{
    const int MAX_ROW = 5;
    double matrix[MAX_ROW][MAX_COL] = { 1,2,3,4,5 };

    sumOfRow(matrix,0,MAX_ROW);
}

