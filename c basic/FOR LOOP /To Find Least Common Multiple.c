#include <stdio.h>

int main() {

  int n1,n2;
  int a,b;
  scanf("%d", &n1);
  scanf("%d", &n2);
  a=n1;
  b=n2;
  while(n1!=n2) {
    if (n1>n2){
    n1=n1-n2;
    }else if (n2>n1) {
      n2=n2-n1;
    }
  }
  int gcd=n1;
  int lcm;
  lcm=a*b/gcd;
  printf("%d",lcm);

  return 0;
}



