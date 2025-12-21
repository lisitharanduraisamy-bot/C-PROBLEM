#include <stdio.h>
int main() {
    int angle,angle1,angle2,angle3;
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    angle=angle1+angle2+angle3;
    if(angle==180){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    
    return 0;
}