#include <stdio.h>
#include <math.h>
void operation(base,power) {
    int result=0;
    result=pow(base,power);
    printf("%d",result);
}

int main() {

    int base,power;
    scanf("%d %d",&base,&power);
    operation(base,power);

    return 0;
}

