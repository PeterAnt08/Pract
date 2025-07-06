#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    int dist = y - x;
    int step = 1;
    int sum = 0;
    int count = 0;

    while (sum < dist) {
        count++;
        sum += step;
        if (count % 2 == 0)
            step++;
    }

    return count;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", min_steps(x, y));
    return 0;
}
