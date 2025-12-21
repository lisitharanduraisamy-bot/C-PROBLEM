#include <stdio.h>
int main() {
    int billamount;
    scanf("%d",&billamount);
    if(billamount>=5000){
        printf("%d",billamount-(billamount/100)*10);
    }else{
        printf("%d",billamount-(billamount/100)*5);
    }
    
    
    return 0;
}