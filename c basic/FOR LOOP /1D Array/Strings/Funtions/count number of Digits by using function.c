#include <stdio.h>
int count_number_of_digit(int num){
      int count=0;
      while(num != 0){
        int digit=num%10;
        count++;
        num=num/10;
    }
    return count;
}
int main() {

    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
   
    printf("\n\nNumber of Digit that you Entered is %d",count_number_of_digit(num));

    return 0;
}
