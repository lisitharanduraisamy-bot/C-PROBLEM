#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    b=a%2;
    if(b==1){
        printf("Odd");
    }else{
        printf("Even");
    }
    
    return 0;
}