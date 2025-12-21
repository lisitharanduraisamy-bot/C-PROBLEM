#include <stdio.h>
int main() {
    int mark;
    scanf("%d",&mark);
    if(mark>=35){
        printf("Pass");
    }else if(mark>=30){
        printf("Grace Pass");
    }else{
        printf("Fail");
    }
    
    return 0;
}