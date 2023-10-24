#include <stdio.h>
#include <math.h>

float calcularVolumeEsfera(float raio) {
    const float pi = 3.1414592; // Valor de π
    float volume = (4.0 / 3.0) * pi * pow(raio, 3);
    return volume;
}

int main() {
    float raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = calcularVolumeEsfera(raio);

    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}
