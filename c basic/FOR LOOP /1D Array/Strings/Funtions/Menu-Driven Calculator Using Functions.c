#include <stdio.h>
#include <math.h>
void operation(a,b,ope) {
    if (ope == '+') {
        printf("%d",a+b);
    }else if (ope == '-') {
        printf("%d",a-b);
    }else if (ope == '*') {
        printf("%d",a*b);
    }else if (ope == '/') {
        printf("%.2f",(float)a/b);
    }else {
        printf("Invalid Input");
    }
}

int main() {

    int a,b;
    char ope;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&ope);
    operation(a,b,ope);

    return 0;
}

