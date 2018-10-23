#pragma once
#include <cxxtest/TestSuite.h>

class Tests : public CxxTest::TestSuite
{
public:
	Tests();
	//example
	void test1()
	{
		TS_TRACE("test1");
	}
	~Tests();
};

