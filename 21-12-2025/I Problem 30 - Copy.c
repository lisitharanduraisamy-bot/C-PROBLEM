#include <stdio.h>
int main() {
    int salary;
    scanf("%d",&salary);
    if(salary>=50000){
        printf("%d",salary-(salary/100)*10);
    }else{
        printf("no tax");
    }
    
    return 0;
}