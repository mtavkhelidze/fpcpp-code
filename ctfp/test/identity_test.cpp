//
// Created by Misha Tavkhelidze on 06.05.24.
//

#include <gtest/gtest.h>

#include "identity.h"

TEST(identity, basic_assertion)
{
    EXPECT_EQ(1, identity(1));
}
