#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int next_prime(int n) {
  int next = n + 1;
  while (!is_prime(next)) {
    next++;
  }
  return next;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Next prime number after %d is %d\n", n, next_prime(n));
  return 0;
}
