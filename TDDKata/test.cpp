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

//Задача1
TEST(TDDIntro, TestTask1_A) {
	//Arrange
	Alu myAlu;
	int expected = 1;

	//Act
	int actual = myAlu.Add("1");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, TestTask1_B) {
	//Arrange
	Alu myAlu;
	int expected = 1;

	//Act
	int actual = myAlu.Add("1,");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, TestTask1_C) {
	//Arrange
	Alu myAlu;
	int expected = 2;

	//Act
	int actual = myAlu.Add("1,1");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, TestTask1_D) {
	//Arrange
	Alu myAlu;
	int expected = 2;

	//Act
	int actual = myAlu.Add("1,1,");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, TestTask1_E) {
	//Arrange
	Alu myAlu;
	int expected = 0;

	//Act
	int actual = myAlu.Add(",,");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, TestTask1_F) {
	//Arrange
	Alu myAlu;
	int expected = 0;

	//Act
	int actual = myAlu.Add("0, 0");

	//Assert
	ASSERT_EQ(expected, actual);
}

//Задача2
TEST(TDDIntro, TestTask2_A) {
	//Arrange
	Alu myAlu;
	int expected = 0;

	//Act
	int actual = myAlu.Add("0,0,0");

	//Assert
	ASSERT_EQ(expected, actual);
}
TEST(TDDIntro, TestTask2_B) {
	//Arrange
	Alu myAlu;
	int expected = 6;

	//Act
	int actual = myAlu.Add("1,2,3");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST(TDDIntro, TestTask2_C) {
	//Arrange
	Alu myAlu;
	int expected = 1111;

	//Act
	int actual = myAlu.Add("1,10,100,1000");

	//Assert
	ASSERT_EQ(expected, actual);
}