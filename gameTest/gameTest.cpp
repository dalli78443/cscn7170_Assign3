#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* Winner(const char player1[], const char player2[]);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace gameTest
{
	TEST_CLASS(gameTest)
	{
	public:

		TEST_METHOD(Player1wins)
		{
			const char player1[] = "rock";
			const char player2[] = "scissors";
			const char* expected = "Player1"; 
			Assert::AreEqual(expected, Winner(player1, player2));
		}
		TEST_METHOD(Player2wins)
		{
			const char player1[] = "paper";
			const char player2[] = "scissors";
			const char* expected = "Player2";
			Assert::AreEqual(expected, Winner(player1, player2));
		}
		TEST_METHOD(Playersdraw)
		{
			const char player1[] = "scissors";
			const char player2[] = "scissors";
			const char* expected = "Draw";
			Assert::AreEqual(expected, Winner(player1, player2));
		}
		TEST_METHOD(Invalidinput)
		{
			const char player1[] = "papar";
			const char player2[] = "scissors";
			const char* expected = "Invalid";
			Assert::AreEqual(expected, Winner(player1, player2));
		}


	};
}
