#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab13.1\var.cpp"
#include "..\Lab13.1\dod.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsVar;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1;
			x = -2;
			n = 1;
			dod();
			Assert::AreEqual(a, -4.);
		}
	};
}
