#include <stdio.h>

int main() {
    int n, i;
    int max_pop = 0, min_pop = 10000000; // Initialize min_pop to a large value
    float total_pop = 0, mean_pop;

    printf("Enter the number of cities: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int pop;
        printf("Enter the population of city %d: ", i);
        scanf("%d", &pop);

        total_pop += pop;

        if (pop > max_pop) {
            max_pop = pop;
        }

        if (pop < min_pop) {
            min_pop = pop;
        }
    }

    mean_pop = total_pop / n;

    printf("Mean population: %.2f\n", mean_pop);
    printf("Maximum population: %d\n", max_pop);
    printf("Minimum population: %d\n", min_pop);

    return 0;
}
