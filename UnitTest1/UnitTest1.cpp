#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1_rec/Lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Assert::AreEqual(Count("whilr", 0), 0);

		}
	};
}
