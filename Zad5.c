#include <stdio.h>
#include <ctype.h>

int main () {
    char input[10];
    int ascii_code;
    char ch;

    printf("Podaj znak ASCII (np. A) lub kod ASCII (np. 65): ");
    scanf("%s", input);

    if (sscanf(input, "%d", &ascii_code) == 1) {
        ch = (char)ascii_code;
    }
    else {
        ch = input[0];
        ascii_code = (int)ch;
    }

    if (isalpha(ch)) {
        printf("'%c' (kod ASCII: %d) jest literą alfabetu.\n", ch, ascii_code);
    }
    else {
        printf("'%c' (kod ASCII: %d) nie jest literą alfabetu.\n", ch, ascii_code);
    }

    return 0;

}