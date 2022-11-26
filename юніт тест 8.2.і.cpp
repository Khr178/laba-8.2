#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 8.2.i/лаба 8.2.i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест82і
{
	TEST_CLASS(юніттест82і)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str = 'b';
            int t = Count(str, 1, 0, 0);
            Assert::AreEqual(t, 0);
		}
	};
}
