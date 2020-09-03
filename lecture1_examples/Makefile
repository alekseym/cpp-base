all:vardef example_auto example_if line

vardef:vardef.o
	g++ -o vardef vardef.o


vardef.o:vardef.cpp
	g++ -c vardef.cpp


example_auto:example_auto.o
	g++ -o example_auto example_auto.o


example_auto.o:example_auto.cpp
	g++ -c example_auto.cpp -std=c++11


example_if:example_if.o
	g++ -o example_if example_if.o


example_if.o:example_if.cpp
	g++ -c example_if.cpp -std=c++11



line:line.o
	g++ -o line line.o


line.o:line.cpp
	g++ -c line.cpp -std=c++11


clean:
	rm *.o vardef example_auto example_if line
