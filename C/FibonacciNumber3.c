// [Linux]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long int f(int n) {
    if(n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return f(n - 1) + f(n - 2);
    }
}

int main(int argc, char *argv[]) {
    clock_t time1 = 0; // calculating time-start
    clock_t time2 = 0; // calculating time-end
    time1 = clock();
    printf("ans = %lld\n", f(50));
    time2 = clock(); // end
    printf("time: %f seconds\n", (double) (((double) time2 - (double) time1) / CLOCKS_PER_SEC));
    return 0;
}

// Fibonacci Number:  0,  1,  1,  2,  3,  5,  8, 13, 21, 34
// Fibonacci Number: a0, a1, a2, a3, a4, a5, a6, a7, a8, a9
// https://www.geeksforgeeks.org/how-to-measure-time-taken-by-a-program-in-c/