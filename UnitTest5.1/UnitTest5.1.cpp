#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l;
			l = g(7, 7);
			Assert::AreEqual(l, 0.02, 0.000001);
		}
	};
}
