#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#if defined(T) && defined(FMT)

T binomial(T n, T k) {

    if (k == 0) return 1;
    if (n == k) return 1;
    if (n == 0) return 0;
    if (n < k) return 0;

    k = k < n - k ? k : n - k;

    T* dp = calloc(k + 1, sizeof(T));

    dp[0] = 1;

    for (T y = 1; y <= n; y++) {
        for (T x = k; x >= 1; x--) {
            dp[x] = dp[x - 1] + dp[x];
        }
    }

    T ans = dp[k];

    free(dp);

    return ans;
}

int main(int argc, char* argv[]) {

    if (argc != 3) {
        fprintf(stderr, "Usage: binomial <n> <k>\n");
        return EXIT_FAILURE;
    }

    T n = (T)atoll(argv[1]);
    T k = (T)atoll(argv[2]);

    printf("%" FMT "\n", binomial(n, k));

    return EXIT_SUCCESS;
}

#else

#include <assert.h>
static_assert(0, "Please define macro 'T' to represent the number type and 'FMT' to represent its printing format");

#endif