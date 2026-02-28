#include <stdio.h>

int main()
{
    int n, digit, i;
    int num = 0;
    int total = 0;
    scanf("%d", &digit);
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        num = num * 10 + digit;   
        total = total + num;      

        printf("%d", num);

        if(i != n)
        {
            printf("+");
        }
    }

    printf("\n%d", total);

    return 0;
}
