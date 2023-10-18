#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.2/Lab 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod2)
        {
            double t;
            int n = 0;
            t = A(1, 19, 1);
            Assert::AreEqual(t, 0.0526316, 0.00001);
        }

        TEST_METHOD(TestMethod1)
        {
            double p;
            int n = 0;
            p = S(2, 0.00001, n, 1);
            Assert::AreEqual(p, 54.59815, 0.00001);
        }
	};
}
