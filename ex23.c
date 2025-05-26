#include <stdio.h>

int main() {
    char frase[51];
    int controle, i;

    while (fgets(frase, sizeof(frase), stdin) != NULL) {
        controle = 1;

        for (i = 0; frase[i] != '\0'; i++) {
            if (frase[i] >= 'a' && frase[i] <= 'z') {
                if (controle == 1) {
                    frase[i] = frase[i] - 32;
                }
                if (controle == 1) {
                    controle = 0;
                } else {
                    controle = 1;
                }
            }
            else if (frase[i] >= 'A' && frase[i] <= 'Z') {
                if (controle == 0) {
                    frase[i] = frase[i] + 32;
                }
                if (controle == 1) {
                    controle = 0;
                } else {
                    controle = 1;
                }
            }
        }

        printf("%s", frase);
    }

    return 0;
}
