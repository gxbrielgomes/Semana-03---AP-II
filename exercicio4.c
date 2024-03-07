#include <stdio.h>

int main(void) {
  int num;

  // pede um número inteiro

  printf("Insira um número inteiro: ");
  scanf("%d", &num);

  printf("Os divisores de %d são: ", num);

  // calculo

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      printf("%d ", i);
    }
  }
  return 0;
}
