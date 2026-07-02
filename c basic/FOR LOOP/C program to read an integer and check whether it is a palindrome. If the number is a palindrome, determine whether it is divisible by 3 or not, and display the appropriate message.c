#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("%d is a Palindrome Number.\n", original);

        if (original % 3 == 0)
            printf("%d is divisible by 3.\n", original);
        else
            printf("%d is not divisible by 3.\n", original);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n", original);
    }

    return 0;
}
