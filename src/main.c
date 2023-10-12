#include <stdio.h>
#include <stdlib.h>

#include "binomial.h"

int main(int argc, char* argv[]) {

    if (argc != 3) {
        fprintf(stderr, "Usage: binomial [n] [k]\n");
        return EXIT_FAILURE;
    }

    BINOM_T n = atoi(argv[1]);
    BINOM_T k = atoi(argv[2]);

    printf("%llu\n", binom(n, k));

    return EXIT_SUCCESS;
}
