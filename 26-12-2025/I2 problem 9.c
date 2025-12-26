#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("Lowercase");
    }else if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }else if(ch=='!' || ch=='@' || ch=='#' || ch=='$'){
        printf("Special");
    }else{
        printf("Digit");
    }
    
    return 0;
}