#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

void print_prime_numbers_between(int start, int end) {
  for (int i = start; i <= end; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
}

int main() {
  int start, end;
  printf("Enter the starting number: ");
  scanf("%d", &start);
  printf("Enter the ending number: ");
  scanf("%d", &end);
  printf("Prime numbers between %d and %d are: \n", start, end);
  print_prime_numbers_between(start, end);
  return 0;
}
