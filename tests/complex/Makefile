clean_guice:
	rm -f *.class

build_guice: clean_guice
	javac -cp .:`ls ../../frameworks/google.guice/*.jar | xargs | tr ' ' ':'` guice.java

run_guice:
	java -cp .:`ls ../../frameworks/google.guice/*.jar | xargs | tr ' ' ':'` guice

clean_di:

build_di: di_clean
	clang++ -std=c++1y -I ../../frameworks/boost.di/include -O2 di.cpp -o di.out

run_di:
	./di.out

clean_dicpp:

build_dicpp:
	clang++ dicpp.cpp -O2 -I ../../frameworks/dicpp/include/ -std=c++11 ../../frameworks/dicpp/lib/src/*.cpp ../../frameworks/dicpp/lib/src/scopes/*.cpp -pthread -lboost_system -lboost_thread

run_dicpp:
	./dicpp.out

