#include <stdio.h>

void compare(a,b) {
    if (a > b) {
        printf("%d",a);
    }else if (a < b) {
        printf("%d",b);
    }else {
        printf("%d",b);
    }
}

int main() {

    int n1,n2;
    scanf("%d %d",&n1,&n2);
    compare(n1,n2);

    return 0;
}

