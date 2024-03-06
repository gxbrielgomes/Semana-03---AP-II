#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteiaNumero() { return rand() % 100 + 1; }

int solicitaPalpite() {
  int palpite;
  while (1) {
    printf("Tente adivinhar o número (entre 1 e 100): ");
    if (scanf("%d", &palpite) == 1 && palpite >= 1 && palpite <= 100) {
      break;
    } else {
      printf("Por favor, insira um valor válido entre 1 e 100.\n");
      while (getchar() != '\n')
        ; // Limpar o buffer de entrada
    }
  }
  return palpite;
}

int main() {
  srand(time(NULL));
  int numeroSorteado = sorteiaNumero();

  while (1) {
    int palpiteUsuario = solicitaPalpite();

    if (palpiteUsuario == numeroSorteado) {
      printf("Parabéns!!! Você acertou!\n");
      break;
    } else if (palpiteUsuario < numeroSorteado) {
      printf("Você chutou muito baixo! O valor correto é %d.\n",
             numeroSorteado);
    } else {
      printf("Você chutou muito alto! O valor correto é %d.\n", numeroSorteado);
    }
  }

  return 0;
}
