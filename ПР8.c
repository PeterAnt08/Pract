#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long factorial(int num) {
    long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    char word[15]; 
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);
    int frequency[26] = {0}; 

    for (int i = 0; i < length; i++) {
        char c = tolower(word[i]);
        frequency[c - 'a']++;
    }

    long long denominator = 1;
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 1) {
            denominator *= factorial(frequency[i]);
        }
    }

    long long result = factorial(length) / denominator;
    printf("Кількість анаграм: %lld\n", result);

    return 0;
}
