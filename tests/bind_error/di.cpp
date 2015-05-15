#include <boost/di.hpp>

namespace di = boost::di;

struct I { virtual ~I() noexcept = default; virtual void dummy() = 0; }; struct Impl : I { BOOST_DI_INJECT(Impl) { } void dummy() override { } };

struct module {
    auto configure() const noexcept {
        return di::make_injector(
            //di::bind<I, Impl>
        );
    }
};

int main() {
    auto injector = di::make_injector(module{});
    std::unique_ptr<I> object{injector.create<I*>()};
    object->dummy();
}


//di.cpp:17:40: warning: 'create' is deprecated: creatable constraint not satisfied [-Wdeprecated-declarations]
    //std::unique_ptr<I> object{injector.create<I*>()};
                                       //^
//../../frameworks/boost.di/include/boost/di.hpp:3060:7: note: 'create<I *, 0>' has been explicitly marked deprecated here
    //T create() const {
      //^
//../../frameworks/boost.di/include/boost/di.hpp:1842:5: warning: inline function 'boost::di::v1::abstract_type<I>::is_not_bound::error' is not defined [-Wundefined-inline]
    //error(_ = "type not bound, did you forget to add: 'di::bind<interface, implementation>'?")
    //^
//../../frameworks/boost.di/include/boost/di.hpp:1838:40: note: used here
            //constraint_not_satisfied{}.error();
