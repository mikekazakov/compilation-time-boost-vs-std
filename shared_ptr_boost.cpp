#include <boost/make_shared.hpp>

boost::shared_ptr<double> f()
{
    return boost::make_shared<double>(42.);
}
