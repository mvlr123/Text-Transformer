#include <stdio.h>
#include <string.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao;

    while (1) {
        printf("WELCOME TO THE TEXTS TRANSFORMER\n");
        printf("Choose an option:\n");
        printf("1 - Encrypt text\n2 - Dancing text\n3 - Exit\n");

        if (scanf("%d", &opcao) != 1) {
            printf("Invalid input. Please enter a number.\n");
            limpar_buffer();
            continue;
        }
        limpar_buffer();

        if (opcao == 1) {
            char texto[1000];
            char passo1[1000];
            char passo2[1000];
            char criptografia[1000];
            int i, j = 0, k = 0, l = 0;

            printf("Write the text to be encrypted:\n");
            fgets(texto, sizeof(texto), stdin);
            texto[strcspn(texto, "\n")] = '\0';

            for (i = 0; texto[i] != '\0'; i++) {
                char c = texto[i];
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    c = c + 3;
                }
                passo1[j++] = c;
            }
            passo1[j] = '\0';

            int tamanho = strlen(passo1);
            for (i = tamanho - 1; i >= 0; i--) {
                passo2[k++] = passo1[i];
            }
            passo2[k] = '\0';

            tamanho = strlen(passo2);
            for (i = 0; i < tamanho; i++) {
                char c = passo2[i];
                if (i >= tamanho / 2) {
                    c = c - 1;
                }
                criptografia[l++] = c;
            }
            criptografia[l] = '\0';

            printf("Encrypted text: \n%s\n\n", criptografia);
        }

        else if (opcao == 2) {
            char frase[51];
            int controle = 1;
            int i;

            printf("Write the text to be turned into a Dancing Text:\n");
            fgets(frase, sizeof(frase), stdin);
            frase[strcspn(frase, "\n")] = '\0';

            for (i = 0; frase[i] != '\0'; i++) {
                if (frase[i] >= 'a' && frase[i] <= 'z') {
                    if (controle == 1) {
                        frase[i] = frase[i] - 32;
                        controle = 0;
                    } else {
                        controle = 1;
                    }
                } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
                    if (controle == 0) {
                        frase[i] = frase[i] + 32;
                        controle = 1;
                    } else {
                        controle = 0;
                    }
                }
            }

            printf("Dancing Text: \n%s\n\n", frase);
        }

        else if (opcao == 3) {
            break;
        }
    }

    return 0;
}
