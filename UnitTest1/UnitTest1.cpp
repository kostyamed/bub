#include "pch.h"
#include "CppUnitTest.h"
#include "../bubblesort/bubblesort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int* a = new int[n];
			a[0] = 13423;
			a[1] = -423;
			a[2] = -234;
			a[3] = 239234;
			a[4] = 0;
			arr a1(a, n);
			a1.bubbleSort();
			int* ex = new int[n];
			ex[0] = -423;
			ex[1] = -234;
			ex[2] = 0;
			ex[3] = 13423;
			ex[4] = 239234;
			int* act = a1.get();
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(ex[i], act[i]);
			}
		}
	};
}
