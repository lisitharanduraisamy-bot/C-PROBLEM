#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if(number%2==0 && number>0){
        printf("Postive Even");
    }else if(number%2==1 && number>0){
        printf("Postive odd");
    }else if(number%2==0 && number <0){
        printf("Negative Even");
    }else{
        printf("Negative odd");
    }
    
    return 0;
}