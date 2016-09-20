CC=g++

run: collatz_conjecture.o
	$(CC) -o collatz_conjecture.o collatz_conjecture.cpp
	collatz_conjecture.o 

collatz_conjecture.o: collatz_conjecture.cpp
	$(CC) -c collatz_conjecture.cpp

clean:
	rm -rf *.o
