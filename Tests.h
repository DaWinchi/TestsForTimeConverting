#pragma once
#include <cxxtest/TestSuite.h>
#include "TimeConverter.h"

#pragma comment (lib, "./lib/TimeConverting.lib")
class Tests : public CxxTest::TestSuite
{
public:
	//время должно стать 13:30(корректный тест)
	void test1()
	{
		std::string tIn = "13:25";
		std::string tOut;
		std::string expectedStr = "thirteen hours thirty minutes";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 0);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}

	//тест на границу между часами
	void test2()
	{
		std::string tIn = "15:59";
		std::string tOut;
		std::string expectedStr = "sixteen hours four minutes";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 0);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}

	//тест на границу суток
	void test3()
	{
		std::string tIn = "23:57";
		std::string tOut;
		std::string expectedStr = "zero hours two minutes";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 0);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}

	//тест на число часов > 24
	void test4()
	{
		std::string tIn = "29:57";
		std::string tOut = "";
		std::string expectedStr = "";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 2);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}

	//тест на число минут > 60
	void test5()
	{
		std::string tIn = "23:78";
		std::string tOut ="";
		std::string expectedStr = "";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 2);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}
	//тест на иной формат времени
	void test6()
	{
		std::string tIn = "3:22";
		std::string tOut = "";
		std::string expectedStr = "";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 1);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}

	//тест на неверный формат строки
	void test7()
	{
		std::string tIn = "adbtg";
		std::string tOut = "";
		std::string expectedStr = "";
		TS_ASSERT(TimeConverter::GetTimePlus5MinStr(tIn, tOut) == 1);
		TS_ASSERT_EQUALS(tOut, expectedStr);
	}

};

