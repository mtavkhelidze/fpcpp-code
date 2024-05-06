//
// Created by Misha Tavkhelidze on 06.05.24.
//

#ifndef CTFP_COMPOSE_H
#define CTFP_COMPOSE_H

template<typename F, typename G>
auto compose(F f, G g) {
    return [=](auto x) { return f(g(x)); };
}

#endif // CTFP_COMPOSE_H
