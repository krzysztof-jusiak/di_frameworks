clean:
	rm -f *.class

build: clean
	time javac -cp .:`ls ../../frameworks/guice/*.jar | xargs | tr ' ' ':'` guice.java

test:
	time java -cp .:`ls ../../frameworks/guice/*.jar | xargs | tr ' ' ':'` guice

