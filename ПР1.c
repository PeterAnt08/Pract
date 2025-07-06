#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    printf("Введіть три значення: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    total_time = 1.0 / (1.0/t1 + 1.0/t2 + 1.0/t3);

    printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", total_time);

    return 0;
}
