#include <stdio.h>
int main() {
    int sellingprice,costprice;
    scanf("%d",&costprice);
    scanf("%d",&sellingprice);
    if(sellingprice>costprice){
        printf("Profit");
    }else{
        printf("Loss");
    }
    
    return 0;
}