#include <stdio.h>

float converterFahrenheitParaCelsius(float temperaturaFahrenheit) {
    float temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0 / 9.0);
    return temperaturaCelsius;
}

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

    return 0;
}