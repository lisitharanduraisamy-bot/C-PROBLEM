#include <stdio.h>
#include <math.h>
int main() {

  int n;
  scanf("%d", &n);
  int sum=0;
  int i=0;
  while (n>0) {
    int digit=n%10;
    sum=sum+digit*pow(2,i);
    n=n/10;
    i++;
  }
  printf("%d", sum);

  return 0;
}



