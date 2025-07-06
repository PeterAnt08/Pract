#include <stdio.h>

int main() {
    int p, i;
    scanf("%d", &p);

    long long dp[31][4] = {0};

    dp[1][0] = 1;
    dp[1][2] = 1;

    for (i = 2; i <= p; i++) {
        dp[i][0] = dp[i-1][2] + dp[i-1][3];
        dp[i][1] = dp[i-1][0];
        dp[i][2] = dp[i-1][0] + dp[i-1][1];
        dp[i][3] = dp[i-1][2];
    }

    long long result = dp[p][0] + dp[p][1] + dp[p][2] + dp[p][3];
    printf("%lld\n", result);

    return 0;
}
