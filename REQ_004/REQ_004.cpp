#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ004
{
	TEST_CLASS(REQ004)
	{
	public:
		
		TEST_METHOD(getPerimeterfunctionality)
		{
			// This is testing the perimeter function using 2(1+1)=4
			int perimeter = 0;
			int length = 5;
			int width = 3;
			perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(16, perimeter);

		}

		TEST_METHOD(getAreafunctionality)
		{
			// This is testing the area function using 1*1=1
			int area = 0;
			int length = 13;
			int width = 2;
			area = getArea(&length, &width);
			Assert::AreEqual(26, area);
		}


		TEST_METHOD(setLengthfunctionality1)
		{
			int Length1 = 0;
			setLength(20, &Length1);
			Assert::AreEqual(20, Length1);

		}
		TEST_METHOD(setLengthfunctionality2)
		{
			int Length2 = 0;
			setLength(53, &Length2);
			Assert::AreEqual(53, Length2);
		}
		TEST_METHOD(setLengthfunctionality3)
		{
			int Length3 = 0;
			setLength(0, &Length3);
			Assert::AreEqual(0, Length3);
		}
		TEST_METHOD(setWidthfunctionality1)
		{
			int Width1 = 0;
			setWidth(5, &Width1);
			Assert::AreEqual(5, Width1);

		}
		TEST_METHOD(setWidthfunctionality2)
		{
			int Width2 = 0;
			setWidth(55, &Width2);
			Assert::AreEqual(55, Width2);
		}
		TEST_METHOD(setWidthfunctionality3)
		{
			int Width3 = 0;
			setWidth(0, &Width3);
			Assert::AreEqual(0, Width3);
		}
	};
}
