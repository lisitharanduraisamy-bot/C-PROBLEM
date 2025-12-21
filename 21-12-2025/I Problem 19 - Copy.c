#include <stdio.h>
int main() {
    int attendancepercentage;
    scanf("%d",&attendancepercentage);
    if(attendancepercentage>=75){
        printf("Allowed");
    }else{
        printf("Not Allowed");
    }
    
    return 0;
}