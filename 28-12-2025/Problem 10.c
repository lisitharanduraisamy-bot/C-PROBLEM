#include <stdio.h>
int main() {
    int mark;
    scanf("%d",&mark);
    if(mark>=80){
        printf("Grade A");
    }else if(mark>=60){
        printf("Grade B");
    }else if(mark>=40){
        printf("Grade C");
    }else{
        printf("Fail");
    }
    
    return 0;
}