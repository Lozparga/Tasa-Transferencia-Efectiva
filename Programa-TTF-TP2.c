#include <stdio.h>

int main() {
    int bitsDatos, bitsControl;
    double velocidadTransferencia, tasaTransferenciaEfectiva;

    printf("Ingrese la cantidad de bits de datos: ");
    scanf("%d", &bitsDatos);

    printf("Ingrese la cantidad de bits de control: ");
    scanf("%d", &bitsControl);

    printf("Ingrese la velocidad de transferencia (bps): ");
    scanf("%lf", &velocidadTransferencia);

    tasaTransferenciaEfectiva = ((double)bitsDatos / (bitsDatos + bitsControl)) * velocidadTransferencia;

    printf("La tasa de transferencia efectiva es: %.2lf bps\n", tasaTransferenciaEfectiva);

    return 0;
}