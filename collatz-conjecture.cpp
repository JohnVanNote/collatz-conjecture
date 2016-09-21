//
// collatz-conjecture.cpp
//
// John Van Note
// 2014-02-10
//
// Prints the number of steps it takes a number to reach 1 
//
//

#include <iostream>
using namespace std;

// Prototypes
int coll_conj(unsigned int n);

// main function
// @param argc: number of arguments
// @param argv: string-vector of arguments
// @return: 0 if everything goes well
int main(int argc, char *argv[]) {
        const int ARGNUM = 2;

        if(argc != ARGNUM) {
                cout << "Usage: " << argv[0] << " accepts " 
                        << ARGNUM << " arguments" << endl;
        }
        unsigned int num = stoi(argv[1]);
        cout << coll_conj(num) << endl;
        return 0;
}

// coll_conj: tells the number of steps for an int to become 1
// @param n: the integer to begin with
// @return: the number of steps it took
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
