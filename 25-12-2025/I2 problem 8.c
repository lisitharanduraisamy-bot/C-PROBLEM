#include <stdio.h>
int main() {
    int amount;
    scanf("%d",&amount);
    if(amount>=10000){
        printf("%d",amount=amount-(amount/100)*20);
    }else if(amount>=5000){
        printf("%d",amount=amount-(amount/100)*10);
    }else{
        printf("%d",amount=amount-(amount/100)*5);
    }
    
    return 0;
}