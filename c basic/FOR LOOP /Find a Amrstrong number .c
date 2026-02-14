#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int sum=0;
  int original;
  original=n;
  while (n>0) {
    int digit=n%10;
    sum=sum+digit*digit*digit;
    n=n/10;
  }
  if (sum==original) {
    printf("YES");
  }else {
    printf("NO");
  }

  return 0;
}



