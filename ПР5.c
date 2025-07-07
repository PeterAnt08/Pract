#include <stdio.h>

int count_equal_divisors(int n) {
    int count = 0;
    for (int m = 1; m <= n; m++) {
        int quotient = n / m;
        int remainder = n % m;
        if (quotient == remainder) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    printf("Кількість рівних дільників числа %d: %d\n", n, count_equal_divisors(n));
    return 0;
}
