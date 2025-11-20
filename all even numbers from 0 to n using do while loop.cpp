#include <stdio.h>

int main() {
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
        return 0;
    }

    do {
        fact = fact * i;
        i++;
    } while (i <= n);

    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}







