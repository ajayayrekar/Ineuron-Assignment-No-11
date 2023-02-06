#include <stdio.h>

void print_first_n_fibonacci(int n) {
  int first = 0, second = 1, next;
  printf("%d %d", first, second);
  for (int i = 2; i < n; i++) {
    next = first + second;
    printf(" %d", next);
    first = second;
    second = next;
  }
}

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("First %d terms of the Fibonacci series are: \n", n);
  print_first_n_fibonacci(n);
  return 0;
}
