#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 3.3B/Pair.h"
#include "../lab 3.3B/Pair.cpp"
#include "../lab 3.3B/Point.h"
#include "../lab 3.3B/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point x(2, 2.);
			x.Angle();
			Assert::AreEqual(45., x.Angle());
		}
	};
}
