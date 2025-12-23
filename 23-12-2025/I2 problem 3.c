#include <stdio.h>
int main() {
    int units;
    scanf("%d",&units);
    if(units>=100){
        printf("%d",units=(100*1)+((units-100)*2));
    }else{
        printf("%d",units=units*1);
    }
    
    return 0;
}