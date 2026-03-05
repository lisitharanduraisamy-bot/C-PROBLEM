#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num%400==0 || num%4==0 && num%100!=0) {
        printf("%d Leap Year\n",num);
    }else {
        printf("%d Not Leap Year\n",num);
    }
    int count=0;
    int count1=0;
    for (int i=num;i<num+10;i++) {
        if (i%400==0 || i%4==0 && i%100!=0) {
            count++;
        }else {
            count1++;
        }
    }
    printf("Number Of Leap Year: %d\n",count);
    printf("Number Of Non Leap Year: %d\n",count1);

    return 0;
}
