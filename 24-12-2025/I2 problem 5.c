#include <stdio.h>
#include<string.h>
int main() {
    char name[100];
    char password[100];
    scanf("%s %s",&name, &password);
    if(strcmp(name,"admin") == 0 && strcmp(password,"1234") == 0){
        printf("Login Successful");
    }else{
        printf("Login Failed");
    }
    
    return 0;
}