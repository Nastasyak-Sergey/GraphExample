/*
 * coder_gTest.cpp
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Unit tests for Coder class.
 *
 * You may change this file, but it will be restored on Jenkins CI side
 * before each build.
 *
 * Try to figure out the business logic of Coder class by the logic of the
 * unit tests.
 *
 * If you are not familiar with Google Test, please follow the link:
 * https://github.com/google/googletest/blob/master/googletest/docs/primer.md
 *
 */

#include "../project/graph.h"
#include <iostream>
#include "gtest/gtest.h"

#include <limits>
#include <vector>
#include <ctime>

TEST(Grapf, init)
{
	Graph graph;

	std::cin >> graph;

	EXPECT_NE("Hello", "Not Hello");
	EXPECT_STREQ("Hello", "Hello");
}





int main(int argc, char **argv)
{
  printf("Running main() from graph_gTest.cpp\n");

  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
