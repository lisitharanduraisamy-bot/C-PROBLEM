#include <stdio.h>
int main() {

    int p,r,n;
    float si=0;
    printf("Enter Total Amount borrowed : ");
    scanf("%d",&p);
    printf("Enter Number of Years : ");
    scanf("%d",&n);
    printf("Enter Interest Rate Percentage : ");
    scanf("%d",&r);
    si=(float)(p*n*r)/100;
    printf("______________________________________________________________________________________\n\n");
    printf("Your Simple Interest of %d Amount for %d years at %d interest is %.2f\n\n",p,n,r,si);
    printf("Total Amount want to return at end of %d years is %.2f\n\n",n,si+p);   
    printf("______________________________________________________________________________________\n\n");

    return 0;
}
