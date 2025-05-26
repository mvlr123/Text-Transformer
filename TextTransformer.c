#include <stdio.h>
#include <string.h>

// Function to clear the input buffer to avoid input issues
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao;

    while (1) {
        // Display the main menu for the user to choose an option
        printf("WELCOME TO THE TEXTS TRANSFORMER\n");
        printf("Choose an option:\n");
        printf("1 - Encrypt text\n2 - Dancing text\n3 - Exit\n");

        // Read the user's choice and validate input
        if (scanf("%d", &opcao) != 1) {
            printf("Invalid input. Please enter a number.\n");
            limpar_buffer(); // Clear input buffer to avoid infinite loop on invalid input
            continue;
        }
        limpar_buffer(); // Clear buffer after reading the number

        if (opcao == 1) {
            // Declare variables for text transformations
            char texto[1000];
            char passo1[1000];
            char passo2[1000];
            char criptografia[1000];
            int i, j = 0, k = 0, l = 0;

            printf("Write the text to be encrypted:\n");
            fgets(texto, sizeof(texto), stdin); // Read the input text line
            texto[strcspn(texto, "\n")] = '\0'; // Remove the newline character captured by fgets

            // Step 1: Shift each letter by 3 positions in ASCII
            for (i = 0; texto[i] != '\0'; i++) {
                char c = texto[i];
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    c = c + 3;
                }
                passo1[j++] = c;
            }
            passo1[j] = '\0';

            // Step 2: Reverse the resulting string from step 1
            int tamanho = strlen(passo1);
            for (i = tamanho - 1; i >= 0; i--) {
                passo2[k++] = passo1[i];
            }
            passo2[k] = '\0';

            // Step 3: Subtract 1 from the ASCII value of the second half of the reversed string
            tamanho = strlen(passo2);
            for (i = 0; i < tamanho; i++) {
                char c = passo2[i];
                if (i >= tamanho / 2) {
                    c = c - 1;
                }
                criptografia[l++] = c;
            }
            criptografia[l] = '\0';

            // Print the encrypted text result
            printf("Encrypted text: \n%s\n\n", criptografia);
        }

        else if (opcao == 2) {
            char frase[51];
            int controle = 1;
            int i;

            printf("Write the text to be turned into a Dancing Text:\n");
            fgets(frase, sizeof(frase), stdin);
            frase[strcspn(frase, "\n")] = '\0'; // Remove newline character

            // Alternate uppercase and lowercase letters in the text ("Dancing Text")
            for (i = 0; frase[i] != '\0'; i++) {
                if (frase[i] >= 'a' && frase[i] <= 'z') {
                    if (controle == 1) {
                        frase[i] = frase[i] - 32; // Convert to uppercase
                        controle = 0;
                    } else {
                        controle = 1;
                    }
                } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
                    if (controle == 0) {
                        frase[i] = frase[i] + 32; // Convert to lowercase
                        controle = 1;
                    } else {
                        controle = 0;
                    }
                }
            }

            // Print the dancing text result
            printf("Dancing Text: \n%s\n\n", frase);
        }

        else if (opcao == 3) {
            // Exit the program
            break;
        }
    }

    return 0;
}
