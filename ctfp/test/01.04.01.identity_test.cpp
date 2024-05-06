//
// Created by Misha Tavkhelidze on 06.05.24.
//

#include <gtest/gtest.h>
#include <rapidcheck.h>

#include "identity.h"

TEST(identity, identity) {
    rc::check([](const std::string &x) {
        return identity(x) == x;
    });
}

TEST(identity, identity_identity) {
    rc::check([](const std::string &x) {
        return identity(x) == identity(x);
    });
}

TEST(identity, identity_reference) {
    rc::check([](const std::string &x) {
        return identity(&x) == identity(&x);
    });
}
