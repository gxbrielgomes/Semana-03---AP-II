#include <stdio.h>

int main() {
    int num, somaDivisores = 0;

    // Solicita que o usuário insira um número inteiro
    printf("Escreva um número inteiro: ");
    scanf("%d", &num);

    // Encontra a soma dos divisores do número
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == num) {
        printf("%d é um número inteiro perfeito\n", num);
    } else {
        printf("%d NÃO é um número inteiro perfeito\n", num);
    }

    return 0;
}
