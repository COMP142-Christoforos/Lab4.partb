#include "pch.h"
#include "CppUnitTest.h"
#include"..\Lab4.partb\Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5
{
	TEST_CLASS(Lab5)
	{
	public:

		TEST_METHOD(TestMethodForSumOfRow)
		{
			// double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)

			// Arrange
			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 1, 1, 1 };

			// Act
			double sum1 = sumOfRow(matrix, 0, MAX_ROW);
			double sum0 = sumOfRow(matrix, 1, MAX_ROW);

			// Assert
			Assert::AreEqual(3.0, sum1);
			Assert::AreEqual(0.0, sum0);
		}

		//used to Test
		TEST_METHOD(TestMethodForfillWithRandomNum)
		{
			// void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)

			// Arrange
			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 1, 2, 0 };
			double sum2, sum3;

			// Act
			fillWithRandomNum(matrix, MAX_ROW);
			sum2 = sumOfRow(matrix, 0, MAX_ROW);
			sum3 = sumOfRow(matrix, 1, MAX_ROW);

			// Assert
			Assert::AreNotEqual(3.0, sum3);
			Assert::AreNotEqual(0.0, sum2);
		}
	
		TEST_METHOD(TestMethodFormakeIdentityMatrix)
		{
			// bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow)

			// Arrange
			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 0 };
			bool apa;

			// Act
			apa = makeIdentityMatrix(matrix, MAX_ROW);

			// Assert
			Assert::IsFalse(3.0);
		}
	};

}
