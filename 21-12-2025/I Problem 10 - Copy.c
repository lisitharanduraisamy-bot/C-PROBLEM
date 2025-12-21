#include <stdio.h>
int main() {
    int temperature;
    scanf("%d",&temperature);
    if(temperature>30){
        printf("Hot");
    }else{
        printf("Normal");
    }
    
    return 0;
}