#include <stdio.h>

int main() {

    int number_of_subject;
    scanf("%d", &number_of_subject);
    int arr[number_of_subject];
    for (int i = 0; i < number_of_subject; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < number_of_subject; i++) {
        sum=sum+arr[i];
    }
    int count=0;
    for (int i = 0; i < number_of_subject; i++) {
        if (arr[i]<40) {
            count++;
        }
    }
    int average = sum/number_of_subject;
    printf("Average Score: %d\n", average);
    printf("Failed Subject: %d",count);

    return 0;
}
