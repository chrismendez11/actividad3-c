#include <stdio.h>

#define QUETZAL_TO_USD 0.13
#define QUETZAL_TO_EUR 0.11
#define USD_TO_QUETZAL 7.70
#define EUR_TO_QUETZAL 9.02
#define USD_TO_EUR 0.84
#define EUR_TO_USD 1.19

int main() {
    float cantidad;
    int moneda;

    printf("Conversor de monedas\n");
    printf("Seleccione una de las siguientes opciones:\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Dolares a Euros\n");
    printf("4. Convertir de Euros a Dolares\n");
    printf("5. Convertir de Quetzales a Euros\n");
    printf("6. Convertir de Euros a Quetzales\n");

    scanf("%d", &moneda);

    switch (moneda) {
        case 1:
            printf("Ingrese la cantidad de Dolares a convertir: ");
            scanf("%f", &cantidad);
            printf("USD%.2f equivale a QTZ%.2f", cantidad, cantidad * USD_TO_QUETZAL);
            break;
        case 2:
            printf("Ingrese la cantidad de Quetzales a convertir: ");
            scanf("%f", &cantidad);
            printf("QTZ%.2f equivale a USD%.2f", cantidad, cantidad * QUETZAL_TO_USD);
            break;
        case 3:
            printf("Ingrese la cantidad de Dolares a convertir: ");
            scanf("%f", &cantidad);
            printf("USD%.2f equivale a EUR%.2f", cantidad, cantidad * USD_TO_EUR);
            break;
        case 4:
            printf("Ingrese la cantidad de Euros a convertir: ");
            scanf("%f", &cantidad);
            printf("EUR%.2f equivale a USD%.2f", cantidad, cantidad * EUR_TO_USD);
            break;
        case 5:
            printf("Ingrese la cantidad de Quetzales a convertir: ");
            scanf("%f", &cantidad);
            printf("QTZ%.2f equivale a EUR%.2f", cantidad, cantidad * QUETZAL_TO_EUR);
            break;
        case 6:
            printf("Ingrese la cantidad de Euros a convertir: ");
            scanf("%f", &cantidad);
            printf("EUR%.2f equivale a QTZ%.2f", cantidad, cantidad * EUR_TO_QUETZAL);
            break;
        default: 
            printf("Opcion no valida");
    }

    return 0;
}
