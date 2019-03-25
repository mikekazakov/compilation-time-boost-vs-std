#include <memory>

std::unique_ptr<double[]> f()
{
    return std::make_unique<double[]>(42);
}
