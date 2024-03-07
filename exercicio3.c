
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numeroSorteado = rand() % 100 + 1;
    int palpite, tentativas = 0;

    do {
        do {
            printf("Digite seu palpite (entre 1 e 100): ");
            scanf("%d", &palpite);

            if (palpite < 1 || palpite > 100) {
                printf("Por favor, digite um valor válido entre 1 e 100.\n");
            }

        } while (palpite < 1 || palpite > 100);

        tentativas++;

        if (palpite == numeroSorteado) {
            printf("Parabéns!!! Você acertou em %d tentativas!\n", tentativas);
        } else if (palpite < numeroSorteado) {
            printf("Você chutou muito baixo! Tente novamente.\n");
        } else {
            printf("Você chutou muito alto! Tente novamente.\n");
        }

        if (tentativas >= 5 && palpite != numeroSorteado) {
            printf("Você excedeu o número máximo de tentativas. O número sorteado era: %d\n", numeroSorteado);
            break;
        }

    } while (palpite != numeroSorteado);

    return 0;
}