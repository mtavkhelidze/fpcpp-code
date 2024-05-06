//
// Created by Misha Tavkhelidze on 06.05.24.
//

#include <gtest/gtest.h>
#include <rapidcheck/gtest.h>

#include <compose.h>
#include <identity.h>

RC_GTEST_PROP(compose, with_identity, (const std::string &x)) {
    auto f = [](const std::string &x) { return x; };
    auto g = identity<std::string &>;
    auto fi = compose(f, g);
    RC_ASSERT(fi(x) == x);
}

RC_GTEST_PROP(compose, readrrangement, (const int x)) {
    auto f = [](const int x) { return x + 10; };
    auto g = [](const int x) { return x + 2; };
    auto gf = compose(g, f);
    auto fg = compose(f, g);
    RC_ASSERT(gf(x) == fg(x));
}
