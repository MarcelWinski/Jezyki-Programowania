#include <stdio.h>

int main () {
    int a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);

    printf("\nDodawanie: %d + %d = %d", a, b, a + b);
    printf("\nOdejmowanie: %d - %d = %d", a, b, a - b);
    printf("\nMnożenie: %d * %d = %d", a, b, a * b);

    if (b != 0) {
        printf("\nDzielenie: %d / %d = %.2f", a, b, (float)a / b);
        printf("\nReszta z dzielenia: %d %% %d = %d", a, b, a % b);
    }
    else {
        printf("\nDzielenie niemożliwe.");
    }

    return 0;
}