# 
#
# makefile
#
# Created by John Van Note
# 2016-09-20
#
#

CC=g++
src=collatz-conjecture

run: $(src).o
	$(CC) $(src).cpp -o $(src).o
	./$(src).o 

test: $(src).o
	$(CC) $(src).cpp -o $(src).out
	./$(src).out 19

collatz-conjecture.o: $(src).cpp
	$(CC) -c $(src).cpp

clean:
	rm -rf *.o
