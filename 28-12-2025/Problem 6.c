#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='I' || ch=='O' || ch=='U' || ch=='E'){
        printf("Vowel");
    }else{
        printf("Not Vowel");
    }
    
    return 0;
}