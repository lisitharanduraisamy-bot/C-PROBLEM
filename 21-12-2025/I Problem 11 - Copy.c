#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<=9 && a>=-9){
        printf("Single Digit");
    }else{
        printf("Not Single Digit");
    }
    
    return 0;
}