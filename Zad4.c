#include <stdio.h>

int main () {
    int a, b, c;

    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);

    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);

    printf("Podaj trzecią liczbę: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("Największa liczba to %d ", a);
    } 
    else if (b > a && b > c) {
        printf("Największa liczba to %d ", b);
    }
    else {
        printf("Największa liczba to %d ", c);
    }

    return 0;
}