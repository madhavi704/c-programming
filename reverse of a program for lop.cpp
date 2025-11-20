#include <stdio.h>
int main() {
    int n, temp, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // store original number

    // reverse the number using for loop
    for (; temp > 0; temp = temp / 10) {
        reverse = reverse * 10 + (temp % 10);
    }

    // check palindrome
    if (reverse == n)
        printf("%d is a Palindrome number.\n", n);
    else
        printf("%d is NOT a Palindrome number.\n", n);

    return 0;
}
