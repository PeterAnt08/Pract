#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

int main() {
    char word[15];
    scanf("%14s", word); 

    int count[256] = {0};
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        word[i] = toupper(word[i]);
        count[(int)word[i]]++;
    }

    long long total = factorial(len);
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) total /= factorial(count[i]);
    }

    printf("%lld\n", total);
    return 0;
}
