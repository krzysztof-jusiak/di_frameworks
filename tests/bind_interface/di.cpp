#include <boost/di.hpp>

namespace di = boost::di;

struct I { virtual ~I() noexcept = default; virtual void dummy() = 0; }; struct Impl : I { BOOST_DI_INJECT(Impl) { } void dummy() override { } };

struct module {
    auto configure() const noexcept {
        return di::make_injector(
            di::bind<I, Impl>
        );
    }
};

int main() {
    auto injector = di::make_injector(module{});
    auto object = injector.create<std::unique_ptr<I>>();
    object->dummy();
}

