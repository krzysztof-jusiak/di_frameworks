guice_clean:
	rm -f *.class

guice_build: guice_clean
	javac -cp .:`ls ../../frameworks/google.guice/*.jar | xargs | tr ' ' ':'` guice.java

guice_test:
	java -cp .:`ls ../../frameworks/google.guice/*.jar | xargs | tr ' ' ':'` guice

di_clean:

di_build: di_clean
	clang++ -std=c++1y -I ../../frameworks/boost.di/include -O2 di.cpp -o di.out

di_test:
	./di.out

