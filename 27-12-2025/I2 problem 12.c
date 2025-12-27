#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age<12){
        printf("50");
    }else if(age<60){
        printf("100");
    }else{
        printf("70");
    }
    
    return 0;
}