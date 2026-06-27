#include <stdio.h>
int main() {

    int n1,n2,n3;
    printf("Enter three numbers : ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    int a,b,c;
    a=n1;
    b=n2;
    c=n3;
    while(n1!=n2){
        if(n1 > n2){
            n1=n1-n2;
        }else{
            n2=n2-n1;
        }
    }
    while(n2!=n3){
        if(n2 > n3){
            n2=n2-n3;
        }else{
            n3=n3-n2;
        }
    }

    printf("The GCD of %d %d %d numbers is %d",a,b,c,n3);
    
    return 0;
}
