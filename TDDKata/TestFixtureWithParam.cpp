#include "pch.h"
#include "TestFixtureWithParam.h"
#include <vector>

//Вариант если все параметры захардкожены
//INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
//	::testing::Values(Param("2,3", 5), Param("4", 4)));

std::vector<Param> CreateParametersSet()
{
	std::vector<Param> p;
	p.push_back(Param("2,3", 5));
	p.push_back(Param("4", 4));
	return p;
}

INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
	::testing::ValuesIn(CreateParametersSet()));


std::vector<Param> CreateParametersCalculator()
{
	std::vector<Param> p;
	
	p.push_back(Param("", 0));
	p.push_back(Param("0", 0));
	p.push_back(Param("1", 1));
	p.push_back(Param("9", 9));
	p.push_back(Param("0,0", 0));
	p.push_back(Param("0,9", 9));
	p.push_back(Param("9,0", 9));
	p.push_back(Param("9,9", 18));
	//Задача1
	p.push_back(Param(",1,", 1));
	p.push_back(Param("1,", 1));
	p.push_back(Param("1,1", 2));
	p.push_back(Param("1,1,", 2));
	p.push_back(Param(",,", 0));
	p.push_back(Param("0, 0", 0));
	//Задача2
	p.push_back(Param("0,0,0", 0));
	p.push_back(Param("1,2,3", 6));
	p.push_back(Param("1,10,100,1000", 1111));
	p.push_back(Param("", 0));
	//Задача 3
	p.push_back(Param("\n", 0));
	p.push_back(Param("1\n2", 3));
	p.push_back(Param("\n1,3", 4));
	p.push_back(Param("\n1\n3\n5", 9));
	
	return p;
}

INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParamCalculator,
	::testing::ValuesIn(CreateParametersCalculator()));
