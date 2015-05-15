#include <fruit/fruit.h>

struct I { virtual ~I() noexcept = default; virtual void dummy() = 0; }; struct Impl : I { INJECT(Impl()) { } void dummy() override { } };

fruit::Component<I> module() {
    return fruit::createComponent();
        //.bind<I, Impl>();
}

int main() {
    fruit::Injector<I> injector{module()};
    std::unique_ptr<I> object{injector.get<I*>()};
    object->dummy();
}

//In file included from fruit.cpp:1:
//In file included from ../../frameworks/google.fruit/include/fruit/fruit.h:25:
//../../frameworks/google.fruit/include/fruit/impl/injection_errors.h:33:3: error: static_assert failed "No explicit binding nor C::Inject definition was found for T."
  //static_assert(AlwaysFalse<T>::value,
  //^             ~~~~~~~~~~~~~~~~~~~~~
//../../frameworks/google.fruit/include/fruit/impl/component.defn.h:41:9: note: in instantiation of template class 'fruit::impl::NoBindingFoundError<I>' requested here
  //(void)typename fruit::impl::meta::CheckIfError<typename Op::Result>::type();
        //^
//fruit.cpp:6:12: note: in instantiation of function template specialization 'fruit::Component<I>::Component<fruit::impl::meta::ConsComp<fruit::impl::meta::Vector<>, fruit::impl::meta::Vector<>,
      //fruit::impl::meta::Vector<>, fruit::impl::meta::Vector<>, fruit::impl::meta::Vector<> > >' requested here
    //return fruit::createComponent();
