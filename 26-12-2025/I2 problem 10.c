#include <stdio.h>
int main() {
    int balance;
    int withdrawalamount;
    scanf("%d %d",&balance,&withdrawalamount);
    if(balance>=(withdrawalamount+500)){
        printf("Success");
    }else{
        printf("Failed");
    }
    
    return 0;
}