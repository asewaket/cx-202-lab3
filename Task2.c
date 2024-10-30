#include <stdio.h>

int main() {
    int N, i, is_prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is a prime number.\n", N);
    } else {
        printf("%d is not a prime number.\n", N);
    }

    return 0;
}
