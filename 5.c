#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  if (n <= 1) return 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

void print_first_n_primes(int n) {
  int count = 0, num = 2;
  while (count < n) {
    if (is_prime(num)) {
      printf("%d ", num);
      count++;
    }
    num++;
  }
}

int main() {
  int n;
  printf("Enter the number of prime numbers to print: ");
  scanf("%d", &n);
  printf("First %d prime numbers are: \n", n);
  print_first_n_primes(n);
  return 0;
}
