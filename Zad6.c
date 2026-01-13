#include <stdio.h>

int main () {
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    if ((rok % 4 == 0 && rok % 100 !=0 ) || (rok % 400 == 0)) {
        printf("%d jest rokiem przestepnym.\n", rok);
    }
    else {
        printf("%d nie jest rokiem przestepnym.\n", rok);
    }

    return 0;
}