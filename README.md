#include <stdio.h>

int main() {
    int x, y;
    long long int result = 1;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    if (x <= 0 || y <= 0) {
        printf("Both base and exponent must be positive integers.\n");
        return 1;
    }

    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    printf("%d raised to the power %d is %lld\n", x, y, result);

    return 0;
}
