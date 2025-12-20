#include <stdio.h>
int main() {
    
    char collegename[90];
    printf("Enter your College name:");
    fgets(collegename, 90, stdin);
    printf("%s",collegename);

    
    return 0;
}