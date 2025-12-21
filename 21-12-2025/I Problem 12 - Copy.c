#include <stdio.h>
int main() {
    int salary,a,b;
    scanf("%d",&salary);
    a=salary+1000;
    b=salary+2000;
    if(salary>20000){
        printf("%d",b);
    }else{
        printf("%d",a);
    }

    return 0;
}