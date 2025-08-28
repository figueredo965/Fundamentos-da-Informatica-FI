#include <stdio.h>

int main() {
    int vetor[10], i, maiorValor;

    // Leitura dos valores
    printf("Digite 10 valores:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Encontrar o maior valor
    maiorValor = vetor[0]; // Inicializa com o primeiro valor
    for(i = 1; i < 10; i++) {
        if(vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    // Exibir o maior valor
    printf("O maior valor digitado foi: %d\n", maiorValor);

    return 0;
}
