#include <stdio.h>
#include <math.h>

int main()
{
    int n, t, d = 0, s = 0;
    scanf("%d", &n);
    t = n;

    while(t > 0)
    {
        d++;
        t /= 10;
    }

    t = n;
    while(t > 0)
    {
        s += pow(t % 10, d);
        t /= 10;
    }

    if(s == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
