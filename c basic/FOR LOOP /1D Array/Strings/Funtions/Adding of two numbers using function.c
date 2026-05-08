#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 20, result;

    result = add(x, y);

    printf("Sum = %d", result);

    return 0;
}
