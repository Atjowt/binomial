#pragma once

#ifndef BINOM_T
#define BINOM_T unsigned long long
#endif

BINOM_T binom(BINOM_T n, BINOM_T k) {

    if (k == 0) return 1;
    if (n == k) return 1;
    if (n == 0) return 0;
    if (n < k) return 0;

    BINOM_T dp[k + 1];
    dp[0] = 1;
    for (BINOM_T x = 1; x <= k; x++) {
        dp[x] = 0;
    }

    for (BINOM_T y = 1; y <= n; y++) {
        for (BINOM_T x = k; x >= 1; x--) {
            dp[x] = dp[x - 1] + dp[x];
        }
    }

    return dp[k];
}