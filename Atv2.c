#include <stdio.h>

void imprimirMesEQuantidadeDeDias(int numero) {
    char* meses[] = {
        "janeiro", "fevereiro", "março", "abril",
        "maio", "junho", "julho", "agosto",
        "setembro", "outubro", "novembro", "dezembro"
    };

    int dias[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if (numero >= 1 && numero <= 12) {
        printf("O mês correspondente ao número %d é %s e tem %d dias.\n", numero, meses[numero - 1], dias[numero - 1]);
    } else {
        printf("Número de mês inválido. Digite um número entre 1 e 12.\n");
    }
}

int main() {
    int numero;
    printf("Digite um número entre 1 e 12: ");
    scanf("%d", &numero);

    imprimirMesEQuantidadeDeDias(numero);

    return 0;
}

