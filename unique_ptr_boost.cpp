#include <boost/move/make_unique.hpp>

boost::movelib::unique_ptr<double[]> f()
{
    return boost::movelib::make_unique<double[]>(42);
}
