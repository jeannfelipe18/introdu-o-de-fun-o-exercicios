#include <stdio.h>
#include <math.h>

float calcularVolumeCilindro(float raio, float altura) {
    const float pi = 3.14159265359; // Valor de π
    float volume = pi * raio * raio * altura;
    return volume;
}

int main() {
    float raio, altura, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = calcularVolumeCilindro(raio, altura);

    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}
