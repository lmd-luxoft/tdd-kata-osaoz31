#include "pch.h"
#include "Alu.h"

//Тест для пустой строки
TEST(TDDIntro, Test0) {
	//Arrange
	Alu myAlu;
	int expected = 0;

	//Act
	int actual = myAlu.Add("");

	//Assert
	ASSERT_EQ(expected, actual);
}

//Тесты для строки содержащей одно число
TEST(TDDIntro, Test1N0) {
	//Arrange
	Alu myAlu;
	int expected = 0;

	//Act
	int actual = myAlu.Add("0");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, Test1N1) {
	//Arrange
	Alu myAlu;
	int expected = 1;

	//Act
	int actual = myAlu.Add("1");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, Test1N9) {
	//Arrange
	Alu myAlu;
	int expected = 9;

	//Act
	int actual = myAlu.Add("9");

	//Assert
	ASSERT_EQ(expected, actual);
}


//Тесты для строки содержащей два числа
TEST(TDDIntro, Test2N00) {
	//Arrange
	Alu myAlu;
	int expected = 0;

	//Act
	int actual = myAlu.Add("0,0");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, Test2N09) {
	//Arrange
	Alu myAlu;
	int expected = 9;

	//Act
	int actual = myAlu.Add("0,9");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, Test2N90) {
	//Arrange
	Alu myAlu;
	int expected = 9;

	//Act
	int actual = myAlu.Add("9,0");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, Test2N99) {
	//Arrange
	Alu myAlu;
	int expected = 18;

	//Act
	int actual = myAlu.Add("9,9");

	//Assert
	ASSERT_EQ(expected, actual);
}