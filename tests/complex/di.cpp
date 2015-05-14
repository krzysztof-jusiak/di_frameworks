#include <boost/di.hpp>

namespace di = boost::di;

struct module {
    auto configure() const noexcept {
        return di::make_injector(
            di::bind<I00, Impl00>
          , di::bind<I01, Impl01>
          , di::bind<I02, Impl02>
          , di::bind<I03, Impl03>
          , di::bind<I04, Impl04>
          , di::bind<I05, Impl05>
          , di::bind<I06, Impl06>
          , di::bind<I07, Impl07>
          , di::bind<I08, Impl08>
          , di::bind<I09, Impl09>
          , di::bind<I10, Impl10>
          , di::bind<I11, Impl11>
          , di::bind<I12, Impl12>
          , di::bind<I13, Impl13>
          , di::bind<I14, Impl14>
          , di::bind<I15, Impl15>
          , di::bind<I16, Impl16>
          , di::bind<I17, Impl17>
          , di::bind<I18, Impl18>
          , di::bind<I19, Impl19>
          , di::bind<I20, Impl20>
          , di::bind<I21, Impl21>
          , di::bind<I22, Impl22>
          , di::bind<I23, Impl23>
          , di::bind<I24, Impl24>
          , di::bind<I25, Impl25>
          , di::bind<I26, Impl26>
          , di::bind<I27, Impl27>
          , di::bind<I28, Impl28>
          , di::bind<I29, Impl29>
          , di::bind<I30, Impl30>
          , di::bind<I31, Impl31>
          , di::bind<I32, Impl32>
          , di::bind<I33, Impl33>
          , di::bind<I34, Impl34>
          , di::bind<I35, Impl35>
          , di::bind<I36, Impl36>
          , di::bind<I37, Impl37>
          , di::bind<I38, Impl38>
          , di::bind<I39, Impl39>
          , di::bind<I40, Impl40>
          , di::bind<I41, Impl41>
          , di::bind<I42, Impl42>
          , di::bind<I43, Impl43>
          , di::bind<I44, Impl44>
          , di::bind<I45, Impl45>
          , di::bind<I46, Impl46>
          , di::bind<I47, Impl47>
          , di::bind<I48, Impl48>
          , di::bind<I49, Impl49>
          , di::bind<I50, Impl50>
          , di::bind<I51, Impl51>
          , di::bind<I52, Impl52>
          , di::bind<I53, Impl53>
          , di::bind<I54, Impl54>
          , di::bind<I55, Impl55>
          , di::bind<I56, Impl56>
          , di::bind<I57, Impl57>
          , di::bind<I58, Impl58>
          , di::bind<I59, Impl59>
          , di::bind<I60, Impl60>
          , di::bind<I61, Impl61>
          , di::bind<I62, Impl62>
          , di::bind<I63, Impl63>
          , di::bind<I64, Impl64>
          , di::bind<I65, Impl65>
          , di::bind<I66, Impl66>
          , di::bind<I67, Impl67>
          , di::bind<I68, Impl68>
          , di::bind<I69, Impl69>
          , di::bind<I70, Impl70>
          , di::bind<I71, Impl71>
          , di::bind<I72, Impl72>
          , di::bind<I73, Impl73>
          , di::bind<I74, Impl74>
          , di::bind<I75, Impl75>
          , di::bind<I76, Impl76>
          , di::bind<I77, Impl77>
          , di::bind<I78, Impl78>
          , di::bind<I79, Impl79>
          , di::bind<I80, Impl80>
          , di::bind<I81, Impl81>
          , di::bind<I82, Impl82>
          , di::bind<I83, Impl83>
          , di::bind<I84, Impl84>
          , di::bind<I85, Impl85>
          , di::bind<I86, Impl86>
          , di::bind<I87, Impl87>
          , di::bind<I88, Impl88>
          , di::bind<I89, Impl89>
          , di::bind<I90, Impl90>
          , di::bind<I91, Impl91>
          , di::bind<I92, Impl92>
          , di::bind<I93, Impl93>
          , di::bind<I94, Impl94>
          , di::bind<I95, Impl95>
          , di::bind<I96, Impl96>
          , di::bind<I97, Impl97>
          , di::bind<I98, Impl98>
          , di::bind<I99, Impl99>
        );
    }
};

int main() {
    auto injector = di::make_injector(module{});
    injector.create<BigComplexity>();
}

