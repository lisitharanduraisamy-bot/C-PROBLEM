#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("Divisible");
    }else{
        printf("Not Divisible");
    }
    
    return 0;
}