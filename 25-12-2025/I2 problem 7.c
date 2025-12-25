#include <stdio.h>
int main() {
    int mark;
    scanf("%d",&mark);
    if(mark>=40){
        printf("Pass");
    }else if(mark>=35){
        printf("Grace Pass");
    }else{
        printf("Fail");
    }
    
    return 0;
}