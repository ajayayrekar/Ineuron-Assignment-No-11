#include <stdio.h>

int factorial(int num) {
  int fact = 1;
  for (int i = 1; i <= num; i++) {
    fact *= i;
  }
  return fact;
}

double sum_of_series(int n) {
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (double) factorial(i) / i;
  }
  return sum;
}

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("The sum of the series 1! / 1 + 2! / 2 + 3! / 3 + ... + %d! / %d is %lf\n", n, n, sum_of_series(n));
  return 0;
}

