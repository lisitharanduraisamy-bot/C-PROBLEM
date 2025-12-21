#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    b=a%5;
    if(b==0){
        printf("Yes");
    }else{
        printf("No");
    }

    
    return 0;
}