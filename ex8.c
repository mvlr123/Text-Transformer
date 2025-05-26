#include <stdio.h>

int main(){
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        int vet[10000];
        int i, k, maior = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
            if (vet[i] > maior) {
                maior = vet[i];
            }
        }

        for (i = 0; i <= maior; i++) {
            int quant = 0;
            for (k = 0; k < n; k++) {
                if (vet[k] <= i) {
                    quant++;
                }
            }
            printf("(%d) %d\n", i, quant);
        }
    }

    return 0;
}
