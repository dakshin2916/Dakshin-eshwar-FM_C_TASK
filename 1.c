#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0; 

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b, c, sum;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    printf("\nSum = %d\n", sum);

    // Even or Odd
    if (sum % 2 == 0)
        printf("The sum is Even\n");
    else
        printf("The sum is Odd\n");

    // Prime or Composite
    if (sum <= 1)
        printf("The sum is neither prime nor composite\n");
    else if (isPrime(sum))
        printf("The sum is Prime\n");
    else
        printf("The sum is Composite\n");

    return 0;
}