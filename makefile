CXXFLAGS = -Os -std=c++14

all::main

main: main.cpp
	$(CXX) -o main $(CXXFLAGS) main.cpp

clean:
	rm -rf *.o main
