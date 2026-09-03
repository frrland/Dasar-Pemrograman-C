#include <stdio.h>

int main() {
    float kelvin;
    int celsius, fahrenheit;

    printf("=== Konversi Suhu ===\n");

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    printf("\nHasil konversi:\n");
    printf("%d Celsius = %d Fahrenheit\n", celsius, fahrenheit);
    printf("%d Celsius = %.1f Kelvin\n", celsius, kelvin);

    return 0;
}