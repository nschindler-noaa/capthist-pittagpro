#include <iostream>
#include <gtest/gtest.h>
using namespace std;

int main(int argc, char* argv[])
{
	std::cout << "Running main() from gtest_main.cc\n";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
