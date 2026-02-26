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
        int odd=0;
        int even=0;
        for (int j=0;j<column;j++) {
            if (arr[i][j]%2==0) {
                even++;
            }else {
                odd++;
            }
        }
        if (odd==even) {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
