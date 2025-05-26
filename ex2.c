#include <stdio.h>
 
int main() {
    int tamanho, i, k, contador = 0;
    
    do {
        scanf("%d", &tamanho);
    } while (tamanho < 1 || tamanho > 1000);
 
    int vetor[tamanho];
 
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
 
    scanf("%d", &k);
 
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] >= k) {
            contador++;
        }
    }
 
    printf("%d\n", contador);
    
    return 0;
}