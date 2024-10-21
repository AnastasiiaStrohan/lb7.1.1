#include "pch.h"
#include "CppUnitTest.h"
#include "../lb7.1.1/lb7.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
    TEST_CLASS(UnitTest711)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int rowCount = 7;
            const int colCount = 5;
            const int Low = 11;
            const int High = 67;

           
            int** a = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
                a[i] = new int[colCount];

           
            Create(a, rowCount, colCount, Low, High);

           
            for (int i = 0; i < rowCount; i++) {
                for (int j = 0; j < colCount; j++) {
                    Assert::IsTrue(a[i][j] >= Low && a[i][j] <= High, L"Елемент поза межами допустимого діапазону");
                }
            }

            
            for (int i = 0; i < rowCount; i++)
                delete[] a[i];
            delete[] a;
        }
    };
	};

