/*
*/

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using ::testing::AtLeast;     


int main(int argc, char** argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}