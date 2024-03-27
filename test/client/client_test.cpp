#include "client/client.h"

#include <gtest/gtest.h>

TEST(ClientTest, BuildingTest)
{
  EXPECT_EQ(2, Client::client(1,1));
}

