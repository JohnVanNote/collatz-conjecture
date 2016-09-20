/*
 * collatz_conjecture.cpp
 *
 * Collatz conjecture algorithm
 *
 * created by John Van Note
 * created on 2/4/14
 */

#include <iostream>

using namespace std;

int coll_conj(unsigned int n);

int main() {
	cout << coll_conj(6) << endl;
	return 0;
}

/*
 * coll_conj: tells the number of steps for an int to become 1
 * @param n: the integer to begin with
 * @return: the number of steps it took
 */
int coll_conj(unsigned int n) {
	int steps = 0;

	while(n != 1) {
		cout << "Step #" << steps + 1 << ": " << n << endl;
		if((n % 2) == 0)
			n = n / 2;
		else
			n = (n * 3) + 1;
		steps++;
	}
	return steps;
}	
