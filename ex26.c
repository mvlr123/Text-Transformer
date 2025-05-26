#include <stdio.h>

int main() {
    int n, i, j, k;
    int aposta[6], cartela[6];
    int sena = 0, quina = 0, quadra = 0;

    for(i = 0; i < 6; i++) {
        scanf("%d", &aposta[i]);
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int acertos = 0;

        for(j = 0; j < 6; j++) {
            scanf("%d", &cartela[j]);
        }

        for(j = 0; j < 6; j++) {
            for(k = 0; k < 6; k++) {
                if(cartela[j] == aposta[k]) {
                    acertos++;
                    break; 
                }
            }
        }

        if(acertos == 4) {
            quadra++;
        } else if(acertos == 5) {
            quina++;
        } else if(acertos == 6) {
            sena++;
        }
    }

    if(sena == 0) {
        printf("Nao houve acertador para sena\n");
    } else {
        printf("Houve %d acertador(es) da sena\n", sena);
    }

    printf("Houve %d acertador(es) da quina\n", quina);
    printf("Houve %d acertador(es) da quadra\n", quadra);

    return 0;
}
