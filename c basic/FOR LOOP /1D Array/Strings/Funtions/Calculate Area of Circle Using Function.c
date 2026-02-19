#include <stdio.h>

void area(a) {
    float area=a*a*3.14;
    printf("%.2f",area);
}

int main() {

    int radius;
    scanf("%d",&radius);
    area(radius);

    return 0;
}

