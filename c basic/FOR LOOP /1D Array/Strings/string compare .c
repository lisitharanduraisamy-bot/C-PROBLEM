#include <stdio.h>
#include <string.h>
int main() {

    char a[100];
    char b[100];
    
    printf("Enter a Character : ");
    scanf("%s",a);
    printf("Enter a Character : ");
    scanf("%s",b);

    printf("\n\n");
    printf("You Typed String 1 is %s\n\n",a);
    printf("You Typed String 2 is %s\n\n",b);

    int x;
    x=strcmp(a,b);
    if(x>0){
        printf("A string is Greater than B string");
    }else if(x<0){
        printf("A string is Smaller than B string");
    }else{
        printf("Both A and B string are Equal");
    }
    
    return 0;
}
