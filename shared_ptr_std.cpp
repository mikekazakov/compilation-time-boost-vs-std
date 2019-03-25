#include <memory>

std::shared_ptr<double> f()
{
    return std::make_shared<double>(42.);
}
