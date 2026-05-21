#include <stdio.h>
int main() {
    
    int a;
    int b;
    int c=0,d=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(a!=0){
        int rem = a%10;
        c=c*10+rem;
        a=a/10;
    }
    while(b!=0){
        int rev=b%10;
        d=d*10+rev;
        b=b/10;
    }
    int e=c+d;
    int result=0;
    while(e!=0){
        int ans=e%10;
        result=result*10+ans;
        e=e/10;
    }

    printf("%d",result);
    
    return 0;
}
