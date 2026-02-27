#include <stdio.h>

int main() {

    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for (int i=0;i<row;i++) {
        int flag=0;
        for (int j=0;j<column-1;j++) {
            if (arr[i][j]<arr[i][j+1]) {
                flag=1;
                break;
            }
        }
        if (flag==1) {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
