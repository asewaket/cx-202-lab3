#include <stdio.h>

int main() {
    int N, i;
    float increment;

    // Input N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Print numbers from N to 0 in descending order
    printf("Numbers from %d to 0 in descending order:\n", N);
    for (i = N; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // Print numbers following pattern B (corrected)
    printf("Numbers from 1 to %d following pattern B:\n", N);
    for (i = 1; i <= N; i++) {
        if (i % 10 != 4 && i % 10 != 7) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Input increment value
    printf("Enter an increment value less than 1: ");
    scanf("%f", &increment);

    // Check if increment is valid
    if (increment >= 1) {
        printf("Error: Increment value must be less than 1.\n");
        return 1;
    }

    // Print numbers from 0 to N with the specified increment
    printf("Numbers from 0 to %d with an increment of %.2f:\n", N, increment);
    float num = 0;
    while (num <= N) {
        printf("%.2f ", num);
        num += increment;
    }
    printf("\n");

    return 0;
}
