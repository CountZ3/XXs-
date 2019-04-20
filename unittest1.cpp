#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
int maxsum(int a[], int left, int right);

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { -1,0,1,2,3,4 };
			Assert::AreEqual(10, maxsum(a, 0, 5));
			// TODO: 在此输入测试代码
		}

	};
}