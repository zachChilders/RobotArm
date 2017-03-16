Solver: Solver.o
	g++ -o Solver Solver.o

Solver.o: Solver.cpp Vector.hpp
	g++ -c Solver.cpp

clean:
	rm *.o Solver

run: Solver
	./Solver