#include <stdio.h>
 
int main(void) {
    int entrada, i, j;
    char num[101];
    int resultados[1000];
 
    scanf("%d", &entrada);
 
    for (i = 0; i < entrada; i++) {
        scanf("%s", num);
        int soma = 0;
 
        j = 0;
        while (num[j] != '\0') {
            if (num[j] == '0') soma += 6;
            if (num[j] == '1') soma += 2;
            if (num[j] == '2') soma += 5;
            if (num[j] == '3') soma += 5;
            if (num[j] == '4') soma += 4;
            if (num[j] == '5') soma += 5;
            if (num[j] == '6') soma += 6;
            if (num[j] == '7') soma += 3;
            if (num[j] == '8') soma += 7;
            if (num[j] == '9') soma += 6;
            j++;
        }
 
        resultados[i] = soma;
    }
 
    for (i = 0; i < entrada; i++) {
        printf("%d leds\n", resultados[i]);
    }
 
    return 0;
}