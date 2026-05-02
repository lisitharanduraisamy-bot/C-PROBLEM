#include <stdio.h>

int main()
{
    int n, s1 = 0, s2 = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n / 2; i++)
        if(n % i == 0)
            s1 += i;

    for(int i = 1; i <= s1 / 2; i++)
        if(s1 % i == 0)
            s2 += i;

    if(s2 == n && s1 != n)
        printf("Amicable Number");
    else
        printf("Not Amicable Number");

    return 0;
}
