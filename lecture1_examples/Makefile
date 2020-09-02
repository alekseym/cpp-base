all:vardef example_auto

vardef:vardef.o
	g++ -o vardef vardef.o


vardef.o:vardef.cpp
	g++ -c vardef.cpp


example_auto:example_auto.o
	g++ -o example_auto example_auto.o


example_auto.o:example_auto.cpp
	g++ -c example_auto.cpp -std=c++11



clean:
	rm *.o vardef example_auto
