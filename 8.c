#include <stdio.h>

void print_pascal_triangle(int height) {
  int C[height][height];
  for (int i = 0; i < height; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        C[i][j] = 1;
      } else {
        C[i][j] = C[i-1][j-1] + C[i-1][j];
      }
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int height;
  printf("Enter the height of the Pascal triangle: ");
  scanf("%d", &height);
  printf("Pascal triangle of height %d: \n", height);
  print_pascal_triangle(height);
  return 0;
}

