#include <stdio.h>

int main() {
    int angka1, angka2, hasil;
    
    printf("Kalkulator Perkalian\n");
    
    printf("Angka pertama: ");
    scanf("%d", &angka1);

    printf("Dikalikan dengan: ");
    scanf("%d", &angka2);

    hasil = angka1 * angka2;

    printf("\nHasil perkalian %d x %d adalah: %d\n", angka1, angka2, hasil);

    return 0;
}