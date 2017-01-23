# 
#
# makefile
#
# Created by John Van Note
# 2016-09-20
#
#

.SILENT: run collatz-conjecture.o

CC=g++
src=collatz-conjecture

run: $(src).o
	$(CC) $(src).cpp -o $(src).out
	./$(src).out $(ARG)

test: $(src).o
	$(CC) $(src).cpp -o $(src).out
	./$(src).out 19

collatz-conjecture.o: $(src).cpp
	$(CC) -c $(src).cpp

clean:
	rm -rf *.o *.out
