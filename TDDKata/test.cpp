#include "pch.h"
#include "Calculator.h"
#include "TestFixture.h"

TEST_F(TestFixture, Sample) {
	//Arr
	//std::string op = "2,3,4,5";
	char op[] = "2,3,4,5";
	int expected = 14;
	//Act
	int actual = calc->Add(op);
	ASSERT_EQ(expected, actual);
}


//Тест для пустой строки
TEST_F(TestFixture, Test0) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add("");

	//Assert
	ASSERT_EQ(expected, actual);
}

//Тесты для строки содержащей одно число
TEST_F(TestFixture, Test1N0) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add("0");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, Test1N1) {
	//Arrange
	int expected = 1;

	//Act
	int actual = calc->Add("1");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, Test1N9) {
	//Arrange
	int expected = 9;

	//Act
	int actual = calc->Add("9");

	//Assert
	ASSERT_EQ(expected, actual);
}


//Тесты для строки содержащей два числа
TEST_F(TestFixture, Test2N00) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add("0,0");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, Test2N09) {
	//Arrange
	int expected = 9;

	//Act
	int actual = calc->Add("0,9");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, Test2N90) {
	//Arrange
	int expected = 9;

	//Act
	int actual = calc->Add("9,0");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, Test2N99) {
	//Arrange
	int expected = 18;

	//Act
	int actual = calc->Add("9,9");

	//Assert
	ASSERT_EQ(expected, actual);
}

//Задача1
TEST_F(TestFixture, TestTask1_A) {
	//Arrange
	int expected = 1;

	//Act
	int actual = calc->Add("1");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask1_B) {
	//Arrange
	int expected = 1;

	//Act
	int actual = calc->Add("1,");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask1_C) {
	//Arrange
	int expected = 2;

	//Act
	int actual = calc->Add("1,1");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask1_D) {
	//Arrange
	int expected = 2;

	//Act
	int actual = calc->Add("1,1,");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask1_E) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add(",,");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask1_F) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add("0, 0");

	//Assert
	ASSERT_EQ(expected, actual);
}

//Задача2
TEST_F(TestFixture, TestTask2_A) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add("0,0,0");

	//Assert
	ASSERT_EQ(expected, actual);
}
TEST_F(TestFixture, TestTask2_B) {
	//Arrange
	int expected = 6;

	//Act
	int actual = calc->Add("1,2,3");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask2_C) {
	//Arrange
	int expected = 1111;

	//Act
	int actual = calc->Add("1,10,100,1000");

	//Assert
	ASSERT_EQ(expected, actual);
}

//Задача 3
TEST_F(TestFixture, TestTask3_A) {
	//Arrange
	int expected = 0;

	//Act
	int actual = calc->Add("\n");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask3_B) {
	//Arrange
	int expected = 3;

	//Act
	int actual = calc->Add("1\n2");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask3_C) {
	//Arrange
	int expected = 4;

	//Act
	int actual = calc->Add("\n1,3");

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestTask3_D) {
	//Arrange
	int expected = 9;

	//Act
	int actual = calc->Add("\n1\n3\n5");

	//Assert
	ASSERT_EQ(expected, actual);
}
