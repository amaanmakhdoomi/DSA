#include <stdio.h>

long long unsigned int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number is not possible.\n");
    else
        printf("The factorial of %d is %llu\n", num, fact(num));

    return 0;
}