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
        int increasing=0;
        for (int j=0;j<column-1;j++) {
            if (arr[i][j]<arr[i][j+1] && arr[i][j]!=arr[i][j+1]) {
                increasing=1;
                break;
            }
        }
        if (increasing==1) {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
