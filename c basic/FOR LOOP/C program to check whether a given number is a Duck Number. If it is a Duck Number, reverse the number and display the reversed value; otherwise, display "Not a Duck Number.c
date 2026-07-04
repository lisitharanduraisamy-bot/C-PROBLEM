#include <stdio.h>

int main()
{
    int num, temp, rev = 0, digit, duck = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Check whether it is a Duck Number
    while (temp > 0)
    {
        digit = temp % 10;
        if (digit == 0)
        {
            duck = 1;
        }
        temp = temp / 10;
    }

    if (duck)
    {
        temp = num;

        // Reverse the number
        while (temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp = temp / 10;
        }

        printf("Duck Number\n");
        printf("Reversed Number = %d\n", rev);
    }
    else
    {
        printf("Not a Duck Number");
    }

    return 0;
}
