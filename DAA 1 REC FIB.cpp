#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void print_fibonacci_series(int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int length_of_series;

    printf("Enter the length of the Fibonacci series: ");
    scanf("%d", &length_of_series);

    printf("Fibonacci series of length %d: ", length_of_series);
    print_fibonacci_series(length_of_series);

    return 0;
}

