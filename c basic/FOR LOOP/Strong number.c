#include <stdio.h>

int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int n, t, s = 0;
    scanf("%d", &n);
    t = n;

    while(t > 0)
    {
        s += fact(t % 10);
        t /= 10;
    }

    if(s == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}
