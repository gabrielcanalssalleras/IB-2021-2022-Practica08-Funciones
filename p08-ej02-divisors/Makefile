CXX = g++  # Comando de compilación de C++
CXXFLAGS = -std=c++14 -Wall  # Las opciones del compilador de C++

all:
	$(CXX) $(CXXFLAGS) -c  divisors *.cc
	$(CXX) $(CXXFLAGS) -o  divisors *.o

clean :
	rm -f *.o
	rm divisors