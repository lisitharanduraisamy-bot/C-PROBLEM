#include <stdio.h>

int pali(int *n){
     int original=*n;
     int sum=0;
     while(*n!=0){
        int rem=*n%10;
        sum=sum*10+rem;
        *n=*n/10;
     }
     printf("Reversed Number: %d\n\n",sum);

     if(sum==original){
        printf("Palindrome");
     }else{
        printf("Not a Palindrome");
     }

}
int main() {

    int n;
    printf("Enter a NUmber: ");
    scanf("%d",&n);
    pali(&n);

    return 0;
}
