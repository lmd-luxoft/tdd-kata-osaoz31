#include "pch.h"
#include "Calculator.h"
#include "TestFixtureWithParam.h"

TEST_P(TestFixtureWithParam, Sample) {
	//Arr
	//std::string op = GetParam().op;
	char * op = GetParam().op;
	int expected = GetParam().expected;
	//Act
	int actual = calc->Add(op);
	//Ass
	ASSERT_EQ(expected, actual);
}

TEST_P(TestFixtureWithParamCalculator, TestsCalculator) {
	//Arr
	//std::string op = GetParam().op;
	char* op = GetParam().op;
	int expected = GetParam().expected;
	//Act
	int actual = calc->Add(op);
	//Ass
	ASSERT_EQ(expected, actual);
}