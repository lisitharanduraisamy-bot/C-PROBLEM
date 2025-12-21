#include <stdio.h>
int main() {
    int units;
    scanf("%d",&units);
    if(units<=100){
        printf("%d",units*1);
    }else{
        printf("%d",units*2);
    }
    
    return 0;
}