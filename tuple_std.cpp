#include <tuple>

std::tuple<int, long, float, double> f()
{
    return std::make_tuple(0, 1l, 2.f, 3.);
}
