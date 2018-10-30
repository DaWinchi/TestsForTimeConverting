/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("report.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Tests_init = false;
#include "Tests.h"

static Tests suite_Tests;

static CxxTest::List Tests_Tests = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Tests( "Tests.h", 6, "Tests", suite_Tests, Tests_Tests );

static class TestDescription_suite_Tests_test1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test1() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 10, "test1" ) {}
 void runTest() { suite_Tests.test1(); }
} testDescription_suite_Tests_test1;

static class TestDescription_suite_Tests_test2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test2() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 20, "test2" ) {}
 void runTest() { suite_Tests.test2(); }
} testDescription_suite_Tests_test2;

static class TestDescription_suite_Tests_test3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test3() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 30, "test3" ) {}
 void runTest() { suite_Tests.test3(); }
} testDescription_suite_Tests_test3;

static class TestDescription_suite_Tests_test4 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test4() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 40, "test4" ) {}
 void runTest() { suite_Tests.test4(); }
} testDescription_suite_Tests_test4;

static class TestDescription_suite_Tests_test5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test5() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 50, "test5" ) {}
 void runTest() { suite_Tests.test5(); }
} testDescription_suite_Tests_test5;

static class TestDescription_suite_Tests_test6 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test6() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 59, "test6" ) {}
 void runTest() { suite_Tests.test6(); }
} testDescription_suite_Tests_test6;

static class TestDescription_suite_Tests_test7 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Tests_test7() : CxxTest::RealTestDescription( Tests_Tests, suiteDescription_Tests, 69, "test7" ) {}
 void runTest() { suite_Tests.test7(); }
} testDescription_suite_Tests_test7;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
