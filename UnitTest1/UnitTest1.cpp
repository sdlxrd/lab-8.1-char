#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 8.1 char\lab 8.1 char\lab 8.1 char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = ".dd.fg.hj";
			int number = Count(str);
			Assert::AreEqual(number, 6);

		}
	};
}
