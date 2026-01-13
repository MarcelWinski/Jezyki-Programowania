#include <stdio.h>

int main (){
    int a, b;

    printf("Podaj pierwszą liczbę:");
    scanf("%d", &a);

    printf("Podaj drugą liczbę:");
    scanf("%d", &b);

    if (a > b) {
        printf("Większa liczba to %d", a);

    } 
    else if (b > a) {
        printf("Większa liczba to %d", b);
    }
    else {
        printf("Liczby są równe.");
    }

    return 0;
}