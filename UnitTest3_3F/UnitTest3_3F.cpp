#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop3.3F\oop3.3F\Date_public.cpp"
#include "D:\Student\oop3.3F\oop3.3F\Date_private.cpp"
#include "D:\Student\oop3.3F\oop3.3F\Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33F
{
	TEST_CLASS(UnitTest33F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Goods a;
			bool t;
			t = a.Init(111, 222, 333);
			Assert::AreEqual(t, true);
		}
	};
}
