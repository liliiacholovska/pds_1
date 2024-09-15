#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_1/pds_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        // Тест для функції implication
        TEST_METHOD(TestImplication)
        {
            Assert::IsTrue(implication(0, 0));
            Assert::IsTrue(implication(0, 1));
            Assert::IsFalse(implication(1, 0));
            Assert::IsTrue(implication(1, 1));
        }

        // Тест для функції equivalence
        TEST_METHOD(TestEquivalence)
        {
            Assert::IsTrue(equivalence(0, 0));
            Assert::IsFalse(equivalence(0, 1));
            Assert::IsFalse(equivalence(1, 0));
            Assert::IsTrue(equivalence(1, 1));
        }

        // Тест для порозрядних операцій OR, AND, XOR
        TEST_METHOD(TestBitwiseOperations)
        {
            string a = "1100011100";
            string b = "1010101110";
            string or_result, and_result, xor_result;

            bitwise_operations(a, b, or_result, and_result, xor_result);

            Assert::AreEqual(string("1110111110"), or_result);
            Assert::AreEqual(string("1000001100"), and_result);
            Assert::AreEqual(string("0110110010"), xor_result);
        }

        // Ще один приклад тесту для рядків з іншими значеннями
        TEST_METHOD(TestBitwiseOperations_AllOnesAndZeros)
        {
            string a = "1111111111";
            string b = "0000000000";
            string or_result, and_result, xor_result;

            bitwise_operations(a, b, or_result, and_result, xor_result);

            Assert::AreEqual(string("1111111111"), or_result);
            Assert::AreEqual(string("0000000000"), and_result);
            Assert::AreEqual(string("1111111111"), xor_result);
        }
	};
}
