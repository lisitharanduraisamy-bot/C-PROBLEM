#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
  int count=0;
  for (int i = 0; i < n; i++) {
    if(arr[i] > 70) {
      count++;
    }
  }
  int current_strike = 0;
  int max_strike = 0;
    for(int i=0;i<n;i++) {
      if(arr[i] > 70) {
        current_strike++;
      }else {
        current_strike = 0;
      }
      if(current_strike > max_strike) {
        max_strike = current_strike;
      }
    }
  printf("Noise Violations: %d\n", count);
  printf("Longest Violation Streak: %d", max_strike);

  return 0;
}



