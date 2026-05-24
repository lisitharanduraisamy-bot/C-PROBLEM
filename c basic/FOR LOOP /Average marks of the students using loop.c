#include <stdio.h>
int main() {
    int n;
    printf("Enter the Number of Subjects : ");
    scanf("%d",&n);
    char subject[n][50];
    int mark[n];
    for(int i=1;i<=n;i++){
        printf("Enter the Subject name %d and mark %d : ",i,i);
        scanf("%s %d",subject[i],&mark[i]);
    }
    for(int i=1;i<=n;i++){
        printf("You Scored %d marks in %s Subject : \n",mark[i],subject[i]);
    }

    printf("\n\n");
    float average;
    int sum;
    for(int i=1;i<=n;i++){
        sum=sum+mark[i];
    }
    average = (float)(sum)/n;
    printf("Average Marks of this %d Subject is = %.2f",n,average);


    return 0;
}
