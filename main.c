#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);
// Check even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
