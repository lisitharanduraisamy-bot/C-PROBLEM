#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    if (m < 0 || m > 100)
        printf("Invalid");
    else if (m >= 90)
        printf("Grade A");
    else if (m >= 75)
        printf("Grade B");
    else if (m >= 50)
        printf("Grade C");
    else if (m >= 35)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}
