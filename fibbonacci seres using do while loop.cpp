#include <stdio.h>
int main() {
    int n, i = 0;
    int evenSum = 0, oddSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do {
        if (i % 2 == 0)
            evenSum += i;  
        else
            oddSum += i;    
        i++;
    } while (i <= n);

    printf("Even Sum = %d\n", evenSum);
    printf("Odd  Sum = %d\n", oddSum);

    return 0;
}






