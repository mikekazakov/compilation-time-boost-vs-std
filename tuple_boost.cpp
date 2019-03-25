#include <boost/tuple/tuple.hpp>

boost::tuple<int, long, float, double> f()
{
    return boost::make_tuple(0, 1l, 2.f, 3.);
}
