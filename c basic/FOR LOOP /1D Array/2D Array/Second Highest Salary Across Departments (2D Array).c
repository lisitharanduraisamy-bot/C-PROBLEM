#include <stdio.h>

int main() {

    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int max1=arr[0][0];
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            if(arr[i][j]>max) {
                max=arr[i][j];
            }
        }
    }
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            if(arr[i][j]>max1 && arr[i][j]<max) {
                max1=arr[i][j];
            }
        }
    }
    printf("%d\n",max1);

    return 0;
}
