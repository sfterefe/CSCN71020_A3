#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C"
{
#include "../CSCN71020_A3/rpsChecker.c"
}

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_Draw)
		{
			const char* result = rpsChecker("Rock", "Rock");
			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Test_P1Win)
		{
			const char* result = rpsChecker("Rock", "Scissors");
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Test_P2Win)
		{
			const char* result = rpsChecker("Rock", "Paper");
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(Test_Invalid)
		{
			const char* result = rpsChecker("Rock", "scissors");
			Assert::AreEqual("Invalid", result);
		}
	};
}
