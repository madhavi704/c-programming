#include <stdio.h>

int main()
{
    int n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
        else
        {
            oddSum = oddSum + i;
        }
    }

    printf("Sum of even numbers from 0 to %d = %d\n", n, evenSum);
    printf("Sum of odd numbers from 0 to %d = %d\n", n, oddSum);

    return 0;
}










