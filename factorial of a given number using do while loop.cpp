#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i = 1;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);
    printf("%d %d ", a, b); 
    do {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    } while (i <= n - 2); 

    return 0;
}









