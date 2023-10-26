#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.3/PR5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2);
			Assert::AreEqual(t, 3.27017, 0.00001);
		}
	};
}
