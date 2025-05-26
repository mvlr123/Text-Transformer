#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int numeros[1000000];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &numeros[i]);
    }


    for (int i = 1; i < N; i++) {
        long long int chave = numeros[i];
        int j = i - 1;
        while (j >= 0 && numeros[j] > chave) {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = chave;
    }

    double mediana;
    if (N % 2 == 1) {
        mediana = numeros[N / 2];
    } else {
        mediana = (numeros[N / 2 - 1] + numeros[N / 2]) / 2.0;
    }

    printf("%.2f\n", mediana);

    return 0;
}
