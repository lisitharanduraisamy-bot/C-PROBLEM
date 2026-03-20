#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];
    int length;

    scanf("%s", str1);
    scanf("%s", str2);

    length = strlen(str1);
    printf("Length = %d\n", length);

    strcpy(copy, str1);
    printf("Copy = %s\n", copy);

    strcat(str1, str2);
    printf("Concat = %s\n", str1);

    if(strcmp(copy, str2) == 0)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    if(strstr(str1, str2) != NULL)
        printf("Substring Found\n");
    else
        printf("Not Found\n");

    strrev(copy);
    printf("Reverse = %s\n", copy);

    return 0;
}
