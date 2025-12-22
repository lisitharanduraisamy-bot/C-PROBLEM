#include <stdio.h>
int main() {
    int salary;
    scanf("%d",&salary);
    if(salary>=30000){
        printf("%d",salary=salary+(salary/100)*10);
    }else{
        printf("%d",salary=salary+(salary/100)*15);
    }
    
    return 0;
}