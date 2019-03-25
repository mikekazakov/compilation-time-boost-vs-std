#include <boost/variant.hpp>

boost::variant<int, long, float, double> f()
{
    return 42.;
}
