#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_13.2(1 частина)/Lab_13.2(1 частина).cpp"
#include "../Lab_13.2(1 частина)/zmina.h"
#include "../Lab_13.2(1 частина)/zminas.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab1321частина
{
	TEST_CLASS(UnitTestLab1321частина)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            #define z 4

			x = 6;
			y = 4;

			w = MAX(x, y, z);

			Assert::AreEqual(w, 4.0);
		}
	};
}
