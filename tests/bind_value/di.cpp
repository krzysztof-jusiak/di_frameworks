#include <boost/di.hpp>

namespace di = boost::di;

struct module {
    auto configure() const noexcept {
        return di::make_injector(
            di::bind<int>.to(42)
        );
    }
};

int main() {
    auto injector = di::make_injector(module{});
    return injector.create<int>() != 42;
}

