#include "server/server.h"

#include <gtest/gtest.h>

TEST(ServerTest, BuildingTest)
{
  EXPECT_EQ(1, Server::server(1,1));
}
