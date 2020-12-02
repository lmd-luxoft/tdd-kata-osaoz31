#pragma once
#include "TestFixture.h"

struct Param
{
    //std::string op;
    char * op;
    int expected;
    //Param(std::string op, int expected) :
    Param(char * op, int expected) :
        op(op), expected(expected) {}
};

class TestFixtureWithParam :
    public TestFixture, public ::testing::WithParamInterface<Param>
{
};

class TestFixtureWithParamCalculator :
    public TestFixture, public ::testing::WithParamInterface<Param>
{
};
