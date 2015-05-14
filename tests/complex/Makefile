clean_guice:
	rm -f *.class

build_guice: clean_guice
	javac -cp .:`ls ../../frameworks/google.guice/*.jar | xargs | tr ' ' ':'` guice.java

run_guice:
	java -cp .:`ls ../../frameworks/google.guice/*.jar | xargs | tr ' ' ':'` guice

clean_di:
	rm -f di.out

build_di:
	/opt/clang/clang-3.4/bin/clang++ -std=c++1y -I ../../frameworks/boost.di/include -O2 di.cpp -o di.out

run_di:
	./di.out

clean_dicpp:
	rm -f dicpp.out

build_dicpp:
	clang++ dicpp.cpp -O2 -I ../../frameworks/dicpp/include -std=c++11 ../../frameworks/dicpp/lib/src/*.cpp ../../frameworks/dicpp/lib/src/scopes/*.cpp -pthread -lboost_system -lboost_thread -o dicpp.out

run_dicpp:
	./dicpp.out

clean_fruit:
	rm -f fruit.out

build_fruit:
	clang++ fruit.cpp -O2 -I ../../frameworks/google.fruit/include -std=c++11 ../../frameworks/google.fruit/src/*.cpp -ftemplate-depth=2000 -o fruit.out

run_fruit:
	./fruit.out

clean_dagger2:
	rm -rf dagger2

build_dagger2: clean_dagger2
	mkdir dagger2
	javac -d dagger2 -cp .:`ls ../../frameworks/dagger2/*.jar | xargs | tr ' ' ':'` dagger2.java

run_dagger2:
	cd dagger2 && java -cp .:`ls ../../../frameworks/dagger2/*.jar | xargs | tr ' ' ':'` dagger2

