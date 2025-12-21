#include <stdio.h>
int main() {
    char ch;
    char cha;
    scanf("%c",&ch);
    scanf("%c",&cha);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        printf("Alphabet");
    }else if(cha=='!' || cha=='@' || cha=='#' || cha=='$' || cha=='%' || ch=='^'){
        printf("Special Character");
    }else{
        printf("Digit");
    }
    
    return 0;
}