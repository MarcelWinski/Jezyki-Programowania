#include <stdio.h>
#include <stdbool.h>

bool czyPrzestepny(int rok) {
    return (rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0);
}

bool poprawnaData(int dzien, int miesiac, int rok) {
    if (rok < 1) return false;
    if (miesiac < 1 || miesiac > 12) return false;

    int dniWMiesiacu;

    switch (miesiac) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            dniWMiesiacu = 31;
            break;
        case 4: case 6: case 9: case 11:
            dniWMiesiacu = 30;
            break;
        case 2:
            dniWMiesiacu = czyPrzestepny(rok) ? 29 : 28;
            break;
        default:
            return false;
    }

    if (dzien < 1 || dzien > dniWMiesiacu) return false;

    return true;
}

int main() {
    int dzien, miesiac, rok;

    printf("Podaj dzien: ");
    scanf("%d", &dzien);
    printf("Podaj miesiac: ");
    scanf("%d", &miesiac);
    printf("Podaj rok: ");
    scanf("%d", &rok);

    if (poprawnaData(dzien, miesiac, rok)) {
        printf("Data %02d/%02d/%d jest poprawna.\n", dzien, miesiac, rok);
    } else {
        printf("Data %02d/%02d/%d jest niepoprawna.\n", dzien, miesiac, rok);
    }
    
    return 0;
    
}