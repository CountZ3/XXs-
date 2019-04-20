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
			int a[] = {1};
			Assert::AreEqual(1, maxsum(a, 0, 0));
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod2)
		{
			int a[] = { -2,11,-4,13,-5,2 };
			Assert::AreEqual(20, maxsum(a, 0, 5));
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod3)
		{
			int a[] = { 5,-3,2,-3,1 };
			Assert::AreEqual(5, maxsum(a, 0, 4));
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod4)
		{
			int a[] = { 3,-4,-3,-7,5 };
			Assert::AreEqual(5, maxsum(a, 0, 4));
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod5)
		{
			int a[] = { -3,2,3,-2,1 };
			Assert::AreEqual(5, maxsum(a, 0, 4));
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod6)
		{
			int a[] = { -3,-2,3,-4,9 };
			Assert::AreEqual(9, maxsum(a, 0, 4));
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod7)
		{
			int a[] = { 5,-4,-2,-3,1 };
			Assert::AreEqual(5, maxsum(a, 0, 4));
			// TODO: 在此输入测试代码
		}
	};
}