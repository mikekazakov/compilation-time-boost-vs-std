#include <boost/function.hpp>
#include <cmath>

boost::function<double(double,double,double)> f()
{
    return [](double x, double y, double z){
        return std::hypot(x, y, z);
    };
}
